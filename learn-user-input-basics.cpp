#include <iostream>

int main()
{
    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;
    std::string city;

    std::cout << "What's your name? " << '\n';
    std::getline(std::cin, name); // Allows string input with spaces, Doesn't work if cin is used before
    
    std::cout << "What's your age? " << '\n';
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';

    std::cout << "Where do you live? " << '\n';
    std::getline(std::cin >> std::ws, city); //std::ws removes whitespace, such as \n.
    std::cout << city << "? Wow!" << '\n';
    

    return 0;
}