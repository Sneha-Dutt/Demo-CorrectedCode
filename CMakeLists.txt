cmake_minimum_required(VERSION 3.10)
project(ExerciseCode)

# Enable testing
enable_testing()

# Add source files for the main application (not for tests)
add_executable(main main.cpp)

# Add GoogleTest
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

# Add the test source file
add_executable(SensorDataTests testCode.cpp)

# Link the test executable with GoogleTest and pthread
target_link_libraries(SensorDataTests GTest::GTest GTest::Main pthread)

# Add test files
add_executable(SensorDataTests testCode.cpp main.cpp)  # Link both main.cpp and testCode.cpp for testing

# Link GoogleTest libraries
target_link_libraries(runTest GTest::GTest GTest::Main)

# Add tests
add_test(NAME SensorDataTests COMMAND SensorDataTests)

# Configure the test output in XML format
set(CMAKE_CTEST_COMMAND ctest --output-on-failure --output-junit unit_test_report.xml)