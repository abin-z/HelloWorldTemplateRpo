set(tgt_name main_application)

add_executable(${tgt_name})

# 动态查找头文件和源文件，便于管理新增文件
file(GLOB_RECURSE headers CONFIGURE_DEPENDS include/*.h include/*.hpp) # 查找所有头文件
file(GLOB_RECURSE sources CONFIGURE_DEPENDS src/*.c src/*.cpp src/*.cc src/*.cxx) # 查找所有源文件

# 将头文件和源文件添加到目标中
target_sources(${tgt_name} PUBLIC ${headers}) # 头文件作为公共接口，供其他项目可见
target_sources(${tgt_name} PRIVATE ${sources}) # 源文件仅供内部使用

target_link_libraries(${tgt_name}
    PRIVATE
        my_module
)

target_compile_features(${tgt_name} PUBLIC cxx_std_17)