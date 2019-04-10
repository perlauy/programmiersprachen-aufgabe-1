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
  REQUIRE(cylinder_volume(2.0f, 5.0f) == Approx(62.83185307179586476925286766559f));
  REQUIRE(cylinder_volume(1.0f, 1.0f) == Approx(3.1415926535897932384626433832795f));
  REQUIRE(cylinder_volume(2.5f, 3.25f) == Approx(63.813600776042675156272443722865f));
}

TEST_CASE (" cylinder_area ", "[cylinder_area]")
{
  REQUIRE(cylinder_area(2.0f, 5.0f) == Approx(62.83185307179586476925286766559f));
  REQUIRE(cylinder_area(1.0f, 1.0f) == Approx(6.283185307179586476925286766559f));
  REQUIRE(cylinder_area(2.5f, 3.25f) == Approx(51.050880620834140125017954978292f));
}

int main (int argc , char * argv []) {
  return Catch::Session().run(argc, argv);
}
