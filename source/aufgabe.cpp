#include "math.hpp"

#include <iostream>

int main() {
	float test_var_1 = 12.564;
	float fract_result = fract(test_var_1);
	std::cout << "Result of fract() of " << test_var_1 << " is " << fract_result << std::endl;

	int floor_result = floor_aufgabe(test_var_1);
	std::cout << "Result of floor() of " << test_var_1 << " is " << floor_result << std::endl;

	unsigned int test_var_2 = 5;
	bool is_prime_result = is_prime(test_var_2);
	std::cout << "Result of is_prime() of " << test_var_2 << " is " << is_prime_result << std::endl;		

	unsigned long factorial_result = factorial(test_var_2);
	std::cout << "Result of factorial() of " << test_var_2 << " is " << factorial_result << std::endl;
	
	unsigned int test_var_3 = 10;
	unsigned long binomial_result = binomial(test_var_3, test_var_2);
	std::cout << "Result of binomial() of " << test_var_2 << " and " << test_var_3 << " is " << binomial_result << std::endl;

	print_100_primes();

	return 0;
}