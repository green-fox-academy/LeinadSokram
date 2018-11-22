#include <gtest/gtest.h>
#include "apple.h"

TEST(apple_check, test_apple){
EXPECT_EQ(getApple(), "apple");
}

TEST(sum_check, test_sum){

    std::vector<int> testVector = {1, 2, 3};

    ASSERT_EQ(getSum(testVector), 6);
}