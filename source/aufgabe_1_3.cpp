#include "math.hpp"

#include <iostream>

int main() {
  
  std::cout << "Calculate the minimum common multiple of the numbers between 1 and 20." << std::endl;

  int result = 20; // Biggest number the result must be divisible into
  int number = 20; // Start from 20 and count down, to evaluate all numbers from 1 to 20

  while (number > 1) {
    
    if (result % number > 0) {
      
      // Use new variables to divide through the factors sequentially
      int temp_number = number;
      int temp_result = result;

      while (temp_number > 1) {
        int prime_factor = get_smallest_prime_divisor(temp_number);
        temp_number /= prime_factor;
        if (temp_result % prime_factor > 0) {
          result *= prime_factor;
        } else {
          temp_result /= prime_factor;
        }
      }
    } // else, it is already divisible

    --number; // count backwards
  }

  std::cout << "Result: " << result << std::endl;
  std::cout << "Should be 232792560." << std::endl;
  return 0;
}