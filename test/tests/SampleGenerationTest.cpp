//
// Created by student on 7/3/16.
//

#include <gtest/gtest.h>
#include <SampleGenerator.h>


class SampleGenerationFixture: public ::testing::Test {
protected:
    virtual void TearDown() {
    }

    virtual void SetUp() {
    }

public:

    SampleGenerator *sample_generator;

    SampleGenerationFixture() : Test() {
        sample_generator = new SampleGenerator();

    }

    virtual ~SampleGenerationFixture() {
        delete sample_generator;
    }

};


TEST_F(SampleGenerationFixture, can_create_sample) {
    std::map<int, int> samples = sample_generator->generateSample(2);
    EXPECT_EQ(samples.size(), 2);
}


