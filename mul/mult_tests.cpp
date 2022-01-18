#include "multiply.cpp"
#include <gtest/gtest.h>
 
TEST(mult, PositiveNos) 
    { 
    ASSERT_EQ(20, mult(5,4));
    ASSERT_EQ(72, mult(12,6));
    ASSERT_EQ(25, mult(5,5));
    ASSERT_EQ(2, mult(1,2));
    }

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
