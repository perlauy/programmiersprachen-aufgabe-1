#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int checksum(int num) {
  int result = 0;
  float num_shifted = num;

  while (num_shifted > 0) {
    num_shifted /= 10;
    int last_digit = (num_shifted - floor(num_shifted)) * 10;
    result += last_digit;
  }

  return result;
}


TEST_CASE (" checksum ", "[checksum]")
{
  REQUIRE (checksum(0) == 0);
  REQUIRE (checksum(120044) == 11);
  REQUIRE (checksum(12345) == 15);
}

int main (int argc , char * argv []) {
  return Catch::Session().run(argc, argv);
}
