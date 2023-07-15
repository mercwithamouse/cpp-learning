#include <iostream>

int main(){

    /*
    Type Conversion
    Converts a value from one data type to another
    Implicit = automatic
    Explicit = Precedes values with new data type
    */

   int x = (int) 3.14; //Converts a floating decimal to an integer (3).
   char y = 100;
   char z = (char) 100;

   std::cout << x << '\n';
   std::cout << y << '\n';
   std::cout << z << '\n';

   int correct = 8;
   int questions = 10;
   double score = (double) correct/questions * 100; // Useful for things like integer division.

   std::cout << score << "%";
    return 0;
}