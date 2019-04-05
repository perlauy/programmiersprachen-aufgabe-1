#include "math.hpp"

#include <iostream>

int main() {
	float test1var = 12.564;
	float fractResult = fract(test1var);
	std::cout << "Result of fract() of " << test1var << " is " << fractResult << std::endl;

	int floorResult = floor(test1var);
	std::cout << "Result of floor() of " << test1var << " is " << floorResult << std::endl;

	unsigned int test2var = 5;
	bool isPrimeResult = is_prime(test2var);
	std::cout << "Result of is_prime() of " << test2var << " is " << isPrimeResult << std::endl;		

	unsigned long factorialResult = factorial(test2var);
	std::cout << "Result of factorial() of " << test2var << " is " << factorialResult << std::endl;
	
	unsigned int test3var = 10;
	unsigned long binomialResult = binomial(test2var, test3var);
	std::cout << "Result of binomialResult() of " << test2var << " and " << test3var << " is " << binomialResult << std::endl;

	print_100_primes();

	return 0;
}