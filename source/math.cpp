#include "math.hpp"

#include <iostream>

/**
  * Returns the fraction digits of a floating point number
  */
float fract(float num) {
  return num - floor(num);
}

/**
  * Returns the whole numbers of a floating point number
  */
int floor_aufgabe(float num) {
  return (int) num;
}

/**
  * Proves if a number is prime or not
  */
bool is_prime(unsigned int num) {
  for(unsigned int i = 2; i < num; ++i) {
    if (num % i == 0) return false; 
  }
  return num > 1;
}

/**
  * Returns the factorial of a natural number
  */
unsigned long factorial(unsigned int num) {
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
    std::cout << "First argument must be a bigger number than the second" << std::endl;
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
      ++count;
    }
    ++num;
  }
}

/*
 * Finds the next bigger prime number
 */
int next_prime(int num) {
  int res = num;
  do {
    res++;
  } while(!is_prime(res));
  return res;
}

/*
 * Finds the smallest prime number into which the argument is divisible
 */
int get_smallest_prime_divisor(int num) {
  int res = 2;
  while(num % res > 0) {
    res = next_prime(res);
  }
  return res;
}