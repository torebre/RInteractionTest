#include "SampleGenerator.h"

#include <iostream>
#include <iomanip>
#include <random>


std::map<int, int> SampleGenerator::generateSample(int numberOfSamples) {
    // TODO Generate tests

//    std::random_device rd;
//    std::mt19937 gen(rd());

//    std::normal_distribution norm = new std::normal_distribution(0, 1);



//    norm(gen);


    std::random_device rd;
    std::mt19937 gen(rd());

    // values near the mean are the most likely
    // standard deviation affects the dispersion of generated values from the mean
    std::normal_distribution<> d(5,2);

    std::map<int, int> hist;
    for(int n=0; n < numberOfSamples; ++n) {
        ++hist[std::round(d(gen))];
    }
    for(auto p : hist) {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
        << p.first << ' ' << std::string(p.second/200, '*') << '\n';

    }
    // Compiler uses return value optimization to avoid creating a copy
    return hist;
}