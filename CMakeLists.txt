cmake_minimum_required(VERSION 3.1.0)
project(glib-experimentations)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-incompatible-pointer-types -Wno-discarded-qualifiers")

find_package(PkgConfig)
pkg_check_modules(GTK gtk+-3.0)

include_directories(${GTK_INCLUDE_DIRS})
link_directories(${GTK_LIBRARY_DIRS})

add_executable(my_first_program my_first_program.c)
target_link_libraries(my_first_program ${GTK_LIBRARIES})

add_executable(first_class first_class.c)
target_link_libraries(first_class ${GTK_LIBRARIES})

add_executable(property_demo property_demo.c)
target_link_libraries(property_demo ${GTK_LIBRARIES})

add_executable(cairo_sample cairo_sample.c)
target_link_libraries(cairo_sample ${GTK_LIBRARIES})