



# 先把 math() 编译成库，方便多个 target 复用
add_library(my_math_lib src/math.cpp)
target_include_directories(my_math_lib PUBLIC include)

# 原来的交互程序
add_executable(my_math src/main.cpp)
target_link_libraries(my_math my_math_lib)

# 测试程序
add_executable(my_math_test test/math_test.cpp)
target_link_libraries(my_math_test my_math_lib)

# 注册到 CTest
enable_testing()
add_test(NAME MathTest COMMAND my_math_test)