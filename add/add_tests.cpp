#include "addition.cpp"
#include <gtest/gtest.h>
 
TEST(add, PositiveNos) 
    { 
    ASSERT_EQ(9, add(5,4));
    ASSERT_EQ(18, add(12,6));
    ASSERT_EQ(10, add(5,5));
    ASSERT_EQ(3, add(1,2));
    //ASSERT_EQ(25.4, add(645.16));
    //ASSERT_EQ(0, add(0.0));
    }

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
