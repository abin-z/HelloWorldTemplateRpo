add_executable(unit_tests
    test.cpp
)

target_link_libraries(unit_tests
    PRIVATE
        my_module
        doctest::doctest_with_main
)

target_compile_features(unit_tests PRIVATE cxx_std_17)

add_test(NAME unit_tests COMMAND unit_tests)
