cmake_minimum_required(VERSION 2.8)

project(sample_generation)

add_definitions(-std=c++11)

set(HEADER_FILES
        samples/SampleGenerator.h
        RInteraction.h
        )

set(SOURCE_FILES
        samples/SampleGenerator.cpp
        RInteraction.cpp
        ../main.cpp
        )


#add_library(calendars STATIC ${SOURCE_FILES} ${HEADER_FILES})

#add_executable(RInteractionTest ${SOURCE_FILES})

add_library(sample_generation STATIC ${SOURCE_FILES} ${HEADER_FILES})