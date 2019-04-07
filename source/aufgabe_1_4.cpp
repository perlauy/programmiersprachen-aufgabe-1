#include <iostream>

int main() {
  int a = 9;
  std::cout << "int a = 9;\n" << std::endl;
  std::cout << "Type: int (integer)\t\tVariable: a\t\tValue: 9\n" << std::endl;
  std::cout << std::endl;

  bool b = false;
  std::cout << "bool b = false;\n" << std::endl;
  std::cout << "Type: bool (boolean)\t\tVariable: b\t\tValue: false\n" << std::endl;
  std::cout << std::endl;

  char c = 'a';
  std::cout << "char c = 'a';\n" << std::endl;
  std::cout << "Type: char (character)\t\tVariable: c\t\tValue: 'a'\n" << std::endl;
  std::cout << std::endl;

  double d = 1.3;
  std::cout << "double d = 1.3;\n" << std::endl;
  std::cout << "Type: double (double-precision floating-point number)\t\tVariable: d\t\tValue: 1.3\n" << std::endl;
  std::cout << std::endl;

  int const five = 5;
  std::cout << "int const five = 5;\n" << std::endl;
  std::cout << "Type: int\t\tVariable: five\t\tValue: 5\n" << std::endl;
  std::cout << "With the key word 'const' we \"promise\" not to change the value assigned to 'five' (and therefore this and other such constants cannot be left uninitialized). The compiler will enforce this, throwing an error if we attempt to do so." << std::endl;
  std::cout << std::endl;

  //double e = a/two;
  std::cout << "Type: double\t\tVariable: e\t\tValue: results in error, since the variable two was not defined:" << "'two': undeclared identifier" << std::endl;
  std::cout << std::endl;

  //five = d;
  std::cout << "Since the variable five was declared as a constant, attempting to assign a new value results in the following compile error:" << std::endl;
  std::cout << std::endl;
  std::cout << "'five': you cannot assign to a variable that is const" << std::endl;
  std::cout << std::endl;

  std::cout << "C++ allows in definitions and arithmetic operations to implicitly convert types, that is using values that would normally be of one type as another. For example, doing the following:" << std::endl;
  std::cout << std::endl;
  std::cout << "int integer_number = 5.3;" << std::endl;
  std::cout << std::endl;
  std::cout << "integer_number would still be an int, with value 5. This way, we are losing information of the originally intended assigned value; the floating-point part. This is a 'narrowing convertion', since it loses information along the way, and can thus lead to unexpected results and problems. More so when the types are less intuitively relatable, as from a double to a char. " << std::endl;
  std::cout << "In this case, the compiler throws the following warning:" << std::endl;
  std::cout << std::endl;
  std::cout << "'=': conversion from 'double' to 'const int', possible loss of data" << std::endl;
  std::cout << std::endl;

  return 0;
}