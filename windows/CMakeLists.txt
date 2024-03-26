cmake_minimum_required(VERSION 3.1.0)
project(glib-experimentations)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:CONSOLE /ENTRY:mainCRTStartup")

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK_LIB REQUIRED IMPORTED_TARGET gtk+-3.0)


add_executable(my_first_program my_first_program.c)
target_link_libraries(my_first_program PRIVATE PkgConfig::GTK_LIB)
target_compile_features(my_first_program PRIVATE cxx_std_17)

add_executable(first_class first_class.c)
target_link_libraries(first_class PRIVATE PkgConfig::GTK_LIB)
target_compile_features(first_class PRIVATE cxx_std_17)

add_executable(property_demo property_demo.c)
target_link_libraries(property_demo PRIVATE PkgConfig::GTK_LIB)
target_compile_features(property_demo PRIVATE cxx_std_17)

add_executable(cairo_sample cairo_sample.c)
target_link_libraries(cairo_sample PRIVATE PkgConfig::GTK_LIB)
target_compile_features(cairo_sample PRIVATE cxx_std_17)
