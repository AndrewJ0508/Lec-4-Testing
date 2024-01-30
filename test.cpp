#define CATCH_CONFIG_MIAN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Number is pos or neg", "[sign]"){
    int num = 5; 
    REQUIRE(Sign(num) == 1);
}