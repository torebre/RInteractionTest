cmake_minimum_required(VERSION 3.5)
project(RInteractionTest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(/usr/share/R/include)
include_directories(src/samples)

#set(SOURCE_FILES src/main.cpp src/RInteraction.cpp src/RInteraction.h src/tests/SampleGenerator.cpp src/tests/SampleGenerator.h test/tests/SampleGenerationTest.cpp test/tests/SampleGenerationTest.h)

set(SOURCE_FILES main.cpp)
add_executable(run_main ${SOURCE_FILES})



add_subdirectory(src)
add_subdirectory(test)

