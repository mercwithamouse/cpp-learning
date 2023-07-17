#include <iostream>

int main() {

    int x; //declaration
    x = 5; // asssignment

    int y = 6; // declaration and assignment
    int sum = x + y;

    //Calling Output
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    int age = 22; //integers (whole number)
    std::cout << age << '\n';
    double price = 17.55; //double (number including decimal)
    std::cout << price << '\n';
    char grade = 'C'; //char (a single character)
    std::cout << grade << '\n';
    bool light = true; // boolean (true or false)
    std::cout << light << '\n';
    float days = 3.5; // floats (decimals)
    std::cout << days << '\n';
    std::string name = "Olani Saiba"; //String (object representing a text sequence)
    std::cout << name << '\n';

    //Display variable and text
    std::cout << "Hello" << name << '\n';
    std::cout << "You are " << age << "years old." << '\n';
    return 0;
}