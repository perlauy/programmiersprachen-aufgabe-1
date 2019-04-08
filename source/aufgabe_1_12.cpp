#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include "catch.hpp"
#include <cmath>

float cylinder_volume(float radius, float height) {
  return M_PI * pow (radius, 2.0) * height;
}

float cylinder_area(float radius, float height) {
  return M_PI * radius * 2.0 * height;
}

TEST_CASE (" cylinder_volume ", "[cylinder_volume]")
{
  REQUIRE(cylinder_volume(2.0, 5.0) == Approx(62.83185307179586476925286766559));
  REQUIRE(cylinder_volume(1.0, 1.0) == Approx(3.1415926535897932384626433832795));
  REQUIRE(cylinder_volume(2.5, 3.25) == Approx(63.813600776042675156272443722865));
}

TEST_CASE (" cylinder_area ", "[cylinder_area]")
{
  REQUIRE(cylinder_area(2.0, 5.0) == Approx(62.83185307179586476925286766559));
  REQUIRE(cylinder_area(1.0, 1.0) == Approx(6.283185307179586476925286766559));
  REQUIRE(cylinder_area(2.5, 3.25) == Approx(51.050880620834140125017954978292));
}

int main (int argc , char * argv []) {
  return Catch::Session().run(argc, argv);
}
