# 定义目标库名称
set(tgt_name my_module)

# 创建静态库
add_library(${tgt_name} STATIC)

# 动态查找头文件和源文件，便于管理新增文件
file(GLOB_RECURSE headers CONFIGURE_DEPENDS include/*.h include/*.hpp) # 查找所有头文件
file(GLOB_RECURSE sources CONFIGURE_DEPENDS src/*.c src/*.cpp src/*.cc src/*.cxx) # 查找所有源文件

# 将头文件和源文件添加到目标中
target_sources(${tgt_name} PUBLIC ${headers}) # 头文件作为公共接口，供其他项目可见
target_sources(${tgt_name} PRIVATE ${sources}) # 源文件仅供内部使用

# 设置位置无关代码 (PIC)，对于动态库来说是必须的
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

target_include_directories(${tgt_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

set_target_properties(${tgt_name} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)