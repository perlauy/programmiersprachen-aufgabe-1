#include "math.hpp"

#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

int gcd (int a, int b)
{
  int result = 1; // Initial result. If a and b have no common divisor, then the result should be 1
  int rest_a = a; // We divide this number into the factors to test each, and see if they are also divisors of b
  int rest_b = b;

  while (rest_a > 1) {
    int prime_factor = get_smallest_prime_divisor(rest_a);
    if (rest_b % prime_factor == 0) { // b is also divisible by prime_factor
      result *= prime_factor;
      rest_b /= prime_factor;
    }
    rest_a /= prime_factor;
  }
  return result;
}

TEST_CASE (" describe_gcd ", "[gcd]")
{
  REQUIRE (gcd(2, 4) == 2);
  REQUIRE (gcd(9, 6) == 3);
  REQUIRE (gcd(3, 7) == 1);
}

int main (int argc , char * argv [])
{
  return Catch::Session().run(argc, argv);
}