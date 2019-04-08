#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

int sum_multiples() {
  int result = 0;

  for (int i = 1; i <= 1000; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      result += i;
    }
  }

  return result;
}

TEST_CASE (" sum_multiples ", "[sum_multiples]")
{
  REQUIRE (sum_multiples() == 234168); //Calculated with formulas
}

int main (int argc , char * argv []) {
  return Catch::Session().run(argc, argv);
}
