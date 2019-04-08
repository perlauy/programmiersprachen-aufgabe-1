#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

float fract(float num) {
  return num - floor(num);
}

TEST_CASE (" fract ", "[fract]")
{
  REQUIRE(fract(15.12) == Approx(0.12));
  REQUIRE(fract(34.9745612385487) == Approx(0.9745612385487));
  REQUIRE(fract(0.0) == Approx(0.0));
}

int main (int argc , char * argv []) {
  return Catch::Session().run(argc, argv);
}
