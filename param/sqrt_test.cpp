#include "sqrt.cpp"
#include <gtest/gtest.h>

class SquareRootTests : public::testing::TestWithParam<std::tuple<double, double>>{ protected:
}; 
TEST_P(SquareRootTests, PositiveNos1) 
    { 
    	double expected = std::get<0>(GetParam());
    	double no = std::get<1>(GetParam());
    	ASSERT_EQ(expected,squareRoot(no));
    }
    
INSTANTIATE_TEST_CASE_P(
	Tests,
	SquareRootTests,
	:: testing::Values(
	std::make_tuple(18.0, 324.0),
	std::make_tuple(6, 36.0)
	));
 

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
