#include "maximum.cpp"
#include <gtest/gtest.h>
 
TEST(max, PositiveNos) 
    { 
    ASSERT_EQ(6, max(5,4,6));
    ASSERT_EQ(18, max(18,12,6));
    ASSERT_EQ(9, max(9,5,5));
    ASSERT_EQ(3, max(1,2,3));
    }

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
