#include <iostream>

double square(double l);

int main()
{
    /*
    return Keyword
    returns a value to the spot you called the function
    */

   double l = 5.5;
   double a = square(l);

   std::cout << "Area: " << a;

    return 0;
}

double square(double l){ //Must change function from void to data type to you are returning
    return l*l;
}