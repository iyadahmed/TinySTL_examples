cmake_minimum_required(VERSION 3.16)
project(TinySTL_examples)

include(FetchContent)
FETCHCONTENT_DECLARE(
        TinySTL
        GIT_REPOSITORY https://github.com/iyadahmed/tiny_stl.git
        GIT_TAG a928bb9ff65bfe0cb0e2335c70abd16e8bdce0d7
)
FETCHCONTENT_MAKEAVAILABLE(TinySTL)

add_executable(CountTris "count_tris.cpp")
target_link_libraries(CountTris PRIVATE tiny_stl)

add_executable(Convert "convert.cpp")
target_link_libraries(Convert PRIVATE tiny_stl)
