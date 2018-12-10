#include <gtest/gtest.h>
#include "simple.h"
#include <vector>

TEST(simple_check, rotate)
{
std::vector<int> numbers = {2, 3, 4, 6, 9};
std::vector<int> expected = {0, 2, 3, 4, 6};

EXPECT_EQ(rotate(numbers), expected);
}