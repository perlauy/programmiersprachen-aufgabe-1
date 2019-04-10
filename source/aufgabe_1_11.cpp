#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

float fract(float num) {
  return num - floor(num);
}

TEST_CASE (" fract ", "[fract]")
{
  REQUIRE(fract(15.12f) == Approx(0.12f));
  REQUIRE(fract(34.9745612385487f) == Approx(0.9745612385487f));
  REQUIRE(fract(0.0f) == Approx(0.0f));
}

int main (int argc , char * argv []) {
  return Catch::Session().run(argc, argv);
}
