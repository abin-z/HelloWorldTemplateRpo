cmake_minimum_required(VERSION 3.16)
project(HelloWorldTemplateRpo LANGUAGES C CXX)

# 开启生成 compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# 设置位置无关代码 (PIC)，对于动态库来说是必须的
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 设置输出路径：库文件、可执行文件和归档文件的生成目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/build_output/lib) # 静态库 (.a/.lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/build_output/bin) # 动态库 (.so/.dll)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/build_output/bin) # 可执行文件

include(CTest)

add_subdirectory(3rd/fmt)
add_subdirectory(3rd/doctest)

add_subdirectory(module)
add_subdirectory(application)
add_subdirectory(test)