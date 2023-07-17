#include <iostream>

int main()
{
    int age; 

    std::cout << "Enter age: ";
    std::cin >> age;

    if (age >= 18){ // Checks whether statement in parethesis is true or false
        std::cout << "Welcome to Devia"; // Then executes code in bracers if true
    }
    else if (age = 17){ // Check whether additial statement is true, order matters
        std::cout << "Come back soon";
    }
    else { //Executes code in bracers if false
        std::cout << "Begone";
    }
    return 0;
}