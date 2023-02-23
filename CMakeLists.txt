cmake_minimum_required(VERSION 3.16)
project(TinySTL_examples)

include(FetchContent)
FETCHCONTENT_DECLARE(
        TinySTL
        GIT_REPOSITORY https://github.com/iyadahmed/tiny_stl.git
        GIT_TAG 50b25081d89e9a8e0998cea9fc27a0cfb040e797
)
FETCHCONTENT_MAKEAVAILABLE(TinySTL)

add_executable(CountTris "count_tris.cpp")
target_link_libraries(CountTris PRIVATE tiny_stl)

add_executable(Convert "convert.cpp")
target_link_libraries(Convert PRIVATE tiny_stl)
