add_executable(hello_world_app
    src/main.cpp
)

target_link_libraries(hello_world_app
    PRIVATE
        hello_world_module
)

set_target_properties(hello_world_app PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)