cmake_minimum_required(VERSION 3.16)
project(TinySTL_examples)
include(FetchContent)
FETCHCONTENT_DECLARE(
        TinySTL
        GIT_REPOSITORY https://github.com/iyadahmed/tiny_stl.git
        GIT_TAG e2d08df1ff2423c6b185be998ebac147db90d59e
)
FETCHCONTENT_MAKEAVAILABLE(TinySTL)

add_executable(CountTris "count_tris.cpp")
target_link_libraries(CountTris PRIVATE tiny_stl)
