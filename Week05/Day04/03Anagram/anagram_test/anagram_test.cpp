#include <gtest/gtest.h>
#include "project.h"

TEST(apple_check, test_apple){
EXPECT_EQ(getApple(), "apple");
}