#include <iostream>
#include "math.hpp"

/**
  * Returns the fraction digits of a floating point number
  */
float fract(float num) {
	return num - floor(num);
}

/**
  * Returns the whole numbers of a floating point number
  */
int floor(float num) {
	return (int) num;
}

/**
  * Proves if a number is prime or not
  */
bool is_prime(unsigned int num) {
	for(int i = 2; i < num; i++) {
		if (num % i == 0) return false; 
	}
	return true;
}

/**
  * Returns the factorial of a natural number
  */
unsigned long factorial(unsigned int num) {
	/*
	 *SOLUTION 2:
	

	unsigned long res = num;
	for (int i = num; i > 1; i--) {
		res *= i;
	}
	return res;
	*/

	//Floating point exception (core dumped) 
	if (num > 2) {
		return num *= factorial(num - 1);
	} else {
		return 1;
	}
	
}

/**
  * Returns combination C(a,b) 
  */
unsigned long binomial(unsigned int a,  unsigned int b) {
	if (a > b)  {
		return factorial(a) / (factorial(b) * factorial(a - b));	
	} else {
		return 0;
	}	
}

/**
  * Prints the first 100 primes in the console
  */
void print_100_primes() {
	std::cout << "Here come the first 100 prime numbers" << std::endl;
	std::cout << std::endl;
	int count = 0;
	int num = 1;
	while(count < 100) {
		if(is_prime(num)) {
			std::cout << num << std::endl;
			count++;
		}
		num++;
	}
}
