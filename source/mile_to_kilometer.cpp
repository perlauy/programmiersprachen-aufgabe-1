#include <iostream>

double mile_to_kilometer(double miles) {
  return miles * 1.609344;
}

int main () {
  std::cout << "Please write a distance in miles:\n";
  double miles_amount = 0.00;
  std::cin >> miles_amount;
  std::cout << "That is " << mile_to_kilometer(miles_amount) << " km.\n" << std::endl;
  return 0;
}