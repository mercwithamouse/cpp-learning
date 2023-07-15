#include <iostream>

void helloWorld(); // Declaring Function, order is top down
void helloName(std::string name); // Declare Function, data type, and variable being referenced
void idDisplay(std::string name, int age); // Allows multiple data types and variables

int main()
{
    std::string name = "Olani";
    int age = 22;

    //function = block of code that you can call
    helloWorld();
    helloName(name);
    idDisplay(name,age);
    return 0;
}

void helloWorld(){ // Defines Variable, can go after main.
    std::cout << "Hello World \n";    
}

void helloName(std::string name){  // Allows using variables in other functions, must specify data type then variable.
    std::cout << "Hello " << name << ". \n";    
}

void idDisplay(std::string name, int age){  // Allows using variables in other functions, must specify data type then variable.
    std::cout << "UID: " << name << "\nAge: " << age;    
}