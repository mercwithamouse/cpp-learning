#include <iostream>

int main ()
{
    /*
    && = check if two conditions are treu
    || = check if at least one condition is true
    ! = reverses logical state of operand
    */
   int temp;
   bool sunny = true;

   std::cout << "Enter the temperature (C): ";
   std::cin >> temp;

   (temp > 0 && temp < 30) ? std::cout << "Sounds comfortable." << '\n' : std::cout << "Sounds horrible." << '\n';
   (temp < 0 || temp > 30) ? std::cout << "Sounds horrible." << '\n' : std::cout << "Sounds comortable." << '\n';
   (sunny) ? std::cout << "It is sunny." << '\n' : std::cout << "It isn't sunny out" << '\n';
    return 0;
}