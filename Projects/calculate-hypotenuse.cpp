#include <iostream>
#include <cmath>

int main()
{
    //c = sqrt[(a^2)+(b^2)]
    double a;
    double b;
    double c;

    std::cout << "Enter A Value: ";
    std::cin >> a;
    std::cout << "Enter B Value: ";
    std::cin >> b;
    std::cout << a << " and " << b << "? Really? Okay." << '\n';
    c=sqrt(pow(a,2)+pow(b,2)); //Take square root of (A^2) + (B^2)
    std::cout << "The hypotenuse is " << c << '\n';
    return 0;
}