#include <iostream>

int main()
{
    /* do while loop
    1: do defined block of code
    2: Repeat if condition is true
    */
   int num;

  do{
    std::cout << "ENTER A NEGATIVE #:" << '\n';
    std::cin >> num;
   }while(num > 0);

    std::cout << "The number is " << num << "." << '\n';
    return 0;
}