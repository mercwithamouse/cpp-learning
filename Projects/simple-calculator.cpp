#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;


    char op; // Operator
    double num1;
    double num2;
    double result;

    cout << "*************CALCULATOR START ******************" << '\n';
    
    cout << "Enter Value 1: " << '\n';
    cin >> num1;

    cout << "Enter either (+ - * /): " << '\n';
    cin >> op;

    cout << "Enter Value 2: " << '\n';
    cin >> num2;

    switch(op){
        case '+':
            result=num1+num2;
            cout << "The result is: " << result << '\n';
            break;
        case '-':
            result=num1-num2;
            cout << "The result is: " << result << '\n';
            break;
        case '*':
            result=num1*num2;
            cout << "The result is: " << result << '\n';
            break;
        case '/':
            result=num1/num2;
            cout << "The result is: " << result << '\n';
            break;
        default:
            cout << "Only use (+ - * /)!" << '\n';
            break;
    }
    cout << "*************CALCULATOR END &&******************";

    return 0;
}