project(sample-libs)

find_package(cdt)

add_library( core core.cpp )
target_include_directories( core PUBLIC ${CMAKE_SOURCE_DIR}/../include )

add_library( something something.c )
target_include_directories( something PUBLIC ${CMAKE_SOURCE_DIR}/../include )