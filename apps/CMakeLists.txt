project(sample)

find_package(cdt)

add_subdirectory(../libs ${CMAKE_BINARY_DIR}/libs)
add_subdirectory(../test_lib/libs ${CMAKE_BINARY_DIR}/libs)

add_contract( sample sample sample.cpp )
target_include_directories( sample PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( sample ${CMAKE_SOURCE_DIR}/../ricardian )

target_link_libraries( sample core )
target_link_libraries( sample something )
target_link_libraries( sample test )