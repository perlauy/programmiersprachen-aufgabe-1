#include <iostream>

int var = 3;
// var wird für das ganze Programm gültig (global). Deren value wird 3, sobald es nicht neu zugewissen wird.

double sum(double a, double b) 
  // Signatur dieser Funktion. Es inkludiert der Typ des return value ("double"), und die Argumente und ihren Typen (zwei Argumenten mit Typ "double"). Es könnte auch zusätzliche Information über die Verfügbarkeit der Funktion inkludieren ("public", "static") und "excepions"
{
  return a + b;
  // Zwischen die geschweiften Klammern sind die argumenten Variablen a und b gültig
}

int square (int var) {
  return var * var;
  // Zwischen die geschweiften Klammern ist die argumente Variable var gültig
}

int main () {
  for (int i = 0; i != 100; ++i) {
    std :: cout << "i^2 = " << square(i) << "\n";
    std :: cout << "i+i = " << sum(i,i) << "\n";
    // Zwischen die geschweiften Klammern ist i gültig.
  }
  return 0;
}
