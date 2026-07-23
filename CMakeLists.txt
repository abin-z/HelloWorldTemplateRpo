cmake_minimum_required(VERSION 3.10)
project(HelloWorldTemplateRpo)

add_library(hello_world_template_rpo STATIC
    src/add.cpp
)

target_include_directories(hello_world_template_rpo PUBLIC include)