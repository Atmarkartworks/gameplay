cmake_minimum_required(VERSION 3.4.1)


set(CMAKE_C_FLAGS  "-DANDROID_NDK -DFT2_BUILD_LIBRARY=1")
set(CMAKE_CXX_FLAGS  "-DANDROID_NDK -DFT2_BUILD_LIBRARY=1")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")






add_library(freetype2-static
src/autofit/autofit.c
src/base/basepic.c
src/base/ftapi.c
src/base/ftbase.c
src/base/ftbbox.c
src/base/ftbitmap.c
src/base/ftdbgmem.c
src/base/ftdebug.c
src/base/ftglyph.c
src/base/ftinit.c
src/base/ftpic.c
src/base/ftstroke.c
src/base/ftsynth.c
src/base/ftsystem.c
src/cff/cff.c
src/pshinter/pshinter.c
src/psnames/psnames.c
src/raster/raster.c
src/sfnt/sfnt.c
src/smooth/smooth.c
src/truetype/truetype.c 
)

target_include_directories(freetype2-static PRIVATE
                           include
                           src)



