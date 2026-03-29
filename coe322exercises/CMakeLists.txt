cmake_minimum_required(VERSION 3.12)
project(dynrectangle)

add_executable(dynrectangle dynrectangle.cpp)

set(fmt_DIR "/Users/guarneros/mylibraries/installations/fmtlib/lib/cmake/fmt")
find_package(fmt REQUIRED)

target_link_libraries(dynrectangle fmt::fmt)
