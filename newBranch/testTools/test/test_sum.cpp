#include <gtest/gtest.h>
#include "sum.h"

TEST(sumTest, Integers) {
    EXPECT_EQ(sum(4, 7), 11);
    EXPECT_EQ(sum(-1, 1), 0);
    EXPECT_EQ(sum(0, 0), 0);
}

TEST(sumTest, Doubles) {
    double epsilon = 1e-6;
    EXPECT_NEAR(sum(4.1, 7.4), 11.5, epsilon);
    EXPECT_NEAR(sum(-1.0, 1.0), 0.0, epsilon);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
