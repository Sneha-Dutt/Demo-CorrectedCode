cmake_minimum_required(VERSION 3.10)
project(ExerciseCode)

# Enable testing
enable_testing()

# Add source files for the main application (not for tests)
add_executable(main main.cpp)

# Add GoogleTest
find_package(GTest REQUIRED)

# Add test files (this includes testCode.cpp for unit tests)
add_executable(runTest testCode.cpp)  # Only test files for unit tests

# Link GoogleTest libraries
target_link_libraries(runTest GTest::GTest GTest::Main)

# Add tests
add_test(NAME SensorDataTests COMMAND runTest)
