add_library(hello_world_module STATIC
    src/add.cpp
)

target_include_directories(hello_world_module
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(hello_world_module PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)