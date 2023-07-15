#include <iostream>

int main ()
{
    /* 
    Ternary Operator
    ?:
    Replacement to if/else statement
    condition ? expression1 : expression2;
    */
   int grade = 75;
   bool happy = false;

    
    std::cout << "Enter your grade percentage: " << '\n';
    std::cin >> grade;
   (grade >= 60) ? std::cout << "You Passed!" << '\n' : std::cout << "You failed!" << '\n';
   (grade % 2) ? std::cout << "Your grade is Even." << '\n' : std::cout << "Your grade is Odd." << '\n'; 
   //happy ? std::cout << "Good" << '\n' : std::cout << "That sucks" << '\n'; 
   std::cout << (happy ? "Good" : "That Sucks");
    return 0;
}