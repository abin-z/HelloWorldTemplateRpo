# HelloWorldTemplateRpo

一个简洁的 C++17 Hello World 模板仓库，可作为后续示例、练习和小型案例的起始项目。

项目使用 CMake 组织模块，并演示了可复用的静态库、可执行应用、单元测试以及第三方依赖的集成方式。

## 项目结构

```text
.
├── application/       # 应用程序入口和可执行目标
├── module/            # 可复用的静态库模块
├── tests/             # doctest 单元测试
├── 3rd/
│   ├── fmt/           # fmt 格式化库（子模块）
│   └── doctest/       # doctest 测试框架（子模块）
├── .github/workflows/ # GitHub Actions CI 配置
├── CMakeLists.txt     # 顶层 CMake 配置
└── LICENSE            # MIT 许可证
```

## 功能示例

应用程序会输出：

```text
Hello World from fmt!
2 + 3 = 5
```

项目还包含一个简单的 `module::add` 函数及其 doctest 测试。

## 环境要求

- 支持 C++17 的编译器
- CMake 3.15 或更高版本
- Git

## 获取代码

克隆仓库时需要同时初始化子模块：

```bash
git clone --recurse-submodules https://github.com/abin-z/HelloWorldTemplateRpo.git
cd HelloWorldTemplateRpo
```

如果已经克隆但尚未初始化子模块：

```bash
git submodule update --init --recursive
```

## 构建

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release --parallel
```

构建产物默认位于：

```text
build_output/
├── bin/
└── lib/
```

## 运行示例

Linux 或 macOS：

```bash
./build_output/bin/main_application
```

Windows：

```powershell
.\build_output\bin\Release\main_application.exe
```

## 运行测试

通过 CTest 运行：

```bash
ctest --test-dir build --output-on-failure --build-config Release
```

也可以直接运行测试可执行文件：

Linux 或 macOS：

```bash
./build_output/bin/unit_tests
```

Windows：

```powershell
.\build_output\bin\Release\unit_tests.exe
```

## 持续集成

GitHub Actions 会在 Ubuntu 和 Windows 上构建项目并运行测试，配置位于 [.github/workflows/ci.yml](.github/workflows/ci.yml)。

## 使用此模板

可通过 GitHub 的 **Use this template** 创建新仓库。常见的扩展方式包括：

1. 在 `module/` 中增加新的业务模块。
2. 在 `application/` 中增加应用入口或功能。
3. 在 `tests/` 中为新功能编写 doctest 测试。
4. 在顶层或子目录的 `CMakeLists.txt` 中注册新的目标。
5. 通过 `.gitmodules` 继续管理第三方依赖。

## 许可证

本项目基于 [MIT License](LICENSE) 发布。
