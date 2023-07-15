#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);


    //.length gives length of a string
    (name.length() > 12) ? std::cout << "That's a long name." << '\n' : std::cout << "That's a short name." << '\n';

    //.empty returns boolean for whether string is empty
    (name.empty()) ? std::cout << "You forgot to enter your name!" << '\n' : std::cout << "Hello " << name << "." << '\n';
    
    //.clear clears the string and makes it empty
    //name.clear();

    //.append adds string in parenthesis to end of called string
    name.append("@devia.hell");
    std::cout << "Your username is now: " << name << '\n';

    //.at shows the character at the defined position
    std::cout << name.at(0) << '\n';

    //.insert inserts defined character at given position
    name.insert(0, "@");
    std::cout <<name << '\n';

    //.find provides position of first instance of defined character
    std::cout << name.find(' ') << '\n';

    //.erase erases part of a string
    std::cout << name.erase(0,6) << '\n';
    
    return 0;
}