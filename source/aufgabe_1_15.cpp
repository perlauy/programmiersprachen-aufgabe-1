#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

double mile_to_kilometer(double miles) {
  return miles * 1.609344;
}

TEST_CASE (" mile_to_kilometer ", "[mile_to_kilometer]") {
  REQUIRE(mile_to_kilometer(0) == Approx(0));
  REQUIRE(mile_to_kilometer(1.0) == Approx(1.609344));
  REQUIRE(mile_to_kilometer(7.0) == Approx(11.26541));
}

int main (int argc , char * argv []) {
  return Catch::Session().run(argc, argv);
}
