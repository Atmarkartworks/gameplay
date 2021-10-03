#
# Copyright (C) The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

cmake_minimum_required(VERSION 3.4.1)

# build native_app_glue as a static lib
set(${CMAKE_C_FLAGS}, "${CMAKE_C_FLAGS}")

#add_library(native_app_glue STATIC
#    ${ANDROID_NDK}/sources/android/native_app_glue/android_native_app_glue.c)
add_library(native_app_glue STATIC
        ../../../../gameplay/src/main/cpp/gameplay/src/gameplay-main-android.cpp
        ${ANDROID_NDK}/sources/android/native_app_glue/android_native_app_glue.c)

target_include_directories(native_app_glue PRIVATE
        ${ANDROID_NDK}/sources/android/native_app_glue
        ../../../../gameplay/src/main/cpp/gameplay/src
        ../../../../gameplay/src/main/cpp/external-deps/include
        )


# now build app's shared lib
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -Wall -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__ANDROID__ -std=c++11 -frtti -Wno-switch-enum -Wno-switch -Wno-inconsistent-missing-override -Wno-deprecated-declarations")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D__ANDROID__")



# Export ANativeActivity_onCreate(),
# Refer to: https://github.com/android-ndk/ndk/issues/381.
set(CMAKE_SHARED_LINKER_FLAGS
    "${CMAKE_SHARED_LINKER_FLAGS} -u ANativeActivity_onCreate")



set(GAME_NAME sample-character)

set(GAME_SRC
        src/CharacterGame.cpp
        src/CharacterGame.h
#        src/TemplateGame.cpp
#        src/TemplateGame.h
)


#add_library(native-activity SHARED main.cpp)
add_library(native-activity SHARED ${GAME_SRC} )



target_include_directories(native-activity PRIVATE
    ${ANDROID_NDK}/sources/android/native_app_glue
    ../../../../gameplay/src/main/cpp/gameplay/src
    ../../../../gameplay/src/main/cpp/external-deps/include
    )



add_library(gameplay-deps
        STATIC
        IMPORTED )
set_target_properties( # Specifies the target library.
        gameplay-deps
        # Specifies the parameter you want to define.
        PROPERTIES IMPORTED_LOCATION
        # Provides the path to the library you want to import.
        /home/aaw/dev/gameplay3d/sampleCharacter/gameplay-deps/out/external-deps/lib/android/${ANDROID_ABI}/libgameplay-deps.a )
#        ../../../../../gameplay-deps/out/external-deps/lib/android/${ANDROID_ABI}/libgameplay-deps.a )

add_library(gameplay
        STATIC
        IMPORTED )
set_target_properties( # Specifies the target library.
        gameplay
        # Specifies the parameter you want to define.
        PROPERTIES IMPORTED_LOCATION
        # Provides the path to the library you want to import.
#        ../../../../../gameplay/build/intermediates/cmake/debug/obj/${ANDROID_ABI}/libgameplay.a )
       /home/aaw/dev/gameplay3d/sampleCharacter/gameplay/build/intermediates/cmake/debug/obj/${ANDROID_ABI}/libgameplay.a )
##        ../../../../gameplay/build/intermediates/cmake/${CMAKE_BUILD_TYPE}/obj/${ANDROID_ABI}/libgameplay.a )



target_link_libraries(native-activity
#        gameplay
#        gameplay-deps
#        GLESv2
#        EGL
#        log
#        android
#        atomic
#        )
        android
        native_app_glue
        gameplay
        gameplay-deps
        EGL
        GLESv1_CM
        GLESv2
        OpenSLES
        log)
        

