#include "max.cpp"
#include <gtest/gtest.h>
 
TEST(maximum, PositiveNos) 
    { 
    
    	int array[3] = {5,4,9};
    ASSERT_EQ(9, maximum(array,3));
    	int array1[4] = {5,4,9,11};
    ASSERT_EQ(11, maximum(array1,4));
    //ASSERT_EQ(18, maximum(12,6));
    //ASSERT_EQ(10, maximum(5,5));
    //ASSERT_EQ(3, maximum(1,2));
    }

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
