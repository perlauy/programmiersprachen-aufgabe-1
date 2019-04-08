#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

unsigned long factorial(unsigned int num) {
  if (num > 1) {
    return num *= factorial(num - 1);
  } else {
    return 1;
  }
}

TEST_CASE (" factorial ", "[factorial]")
{
  REQUIRE(factorial(1) == 1);
  REQUIRE(factorial(0) == 1);
  REQUIRE(factorial(5) == 120);
  REQUIRE(factorial(10) == 3628800);
}

int main (int argc , char * argv []) {
  return Catch::Session().run(argc, argv);
}
