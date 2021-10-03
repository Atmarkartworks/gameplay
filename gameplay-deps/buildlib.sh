#!/bin/sh
#
# @create 2021-Sep-24
# @author tmiura
#
# @insted of Android Studio project module
#
#
#export ANDK=/home/aaw/Android/Sdk/ndk/21.4.7075529
export ANDK=/home/aaw/Android/Sdk/ndk/22.1.7171670
export ASDK=/home/aaw/Android/Sdk/platform-tools
export JDK=/snap/android-studio/current/android-studio/jre

export OPT0=-DCMAKE_TOOLCHAIN_FILE=$ANDK/build/cmake/android.toolchain.cmake
export OPT1=-DCMAKE_SYSTEM_NAME=ANDROID
export OPT2=-DANDROID=1
export OPT3=-DANDROID_PLATFORM=29
export OPT4=-DCMAKE_BUILD_TYPE=Release
#export OPT4=-DCMAKE_BUILD_TYPE=Debug

mkdir build1
cd build1
export OPTABI=-DANDROID_ABI=armeabi-v7a
#cmake -G Ninja $OPT0 $OPT1 $POT2 $POT3 $OPT4 $OPTABI -DANDROID_ARM_NEON=ON ..
#cmake -G Ninja $OPT0 $OPT1 $POT2 $POT3 $OPT4 $OPTABI -DPNG_ARM_NEON=off ..
cmake -G Ninja $OPT0 $OPT1 $POT2 $POT3 $OPT4 $OPTABI ..
ninja
cd ..

mkdir build2
cd build2
export OPTABI=-DANDROID_ABI=arm64-v8a
cmake -G Ninja $OPT0 $OPT1 $POT2 $POT3 $OPT4 $OPTABI ..
ninja
cd ..


mkdir build3
cd build3
export OPTABI=-DANDROID_ABI=x86
cmake -G Ninja $OPT0 $OPT1 $POT2 $POT3 $OPT4 $OPTABI ..
ninja
cd ..



mkdir build4
cd build4
export OPTABI=-DANDROID_ABI=x86_64
cmake -G Ninja $OPT0 $OPT1 $POT2 $POT3 $OPT4 $OPTABI ..
ninja
cd ..


rm -rf build1
rm -rf build2
rm -rf build3
rm -rf build4

