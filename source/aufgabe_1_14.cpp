#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

bool is_prime(unsigned int num) {
  for(unsigned int i = 2; i < num; ++i) {
    if (num % i == 0) return false; 
  }
  return num > 1;
}

TEST_CASE (" is_prime ", "[is_prime]")
{
  REQUIRE(is_prime(0) == false);
  REQUIRE(is_prime(1) == false);
  REQUIRE(is_prime(5) == true);
  REQUIRE(is_prime(53) == true);
  REQUIRE(is_prime(10) == false);
}

int main (int argc , char * argv []) {
  return Catch::Session().run(argc, argv);
}
