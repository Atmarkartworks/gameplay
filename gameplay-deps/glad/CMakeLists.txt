cmake_minimum_required(VERSION 2.8)


add_library(glad_egl src/glad_egl.c)


target_include_directories(glad_egl PRIVATE
                           include
                           )
