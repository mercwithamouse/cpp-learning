#include <iostream>
#include <cmath> //Library with most math functions
int main()
{
    double x = 3.14159;
    double y = 4;
    double z;

    z = std::max(x, y); //Outputs greatest number
    std::cout << z << '\n';
    z = std::min(x,y); //Outputs smallest number
    std::cout << z << '\n';
    z = pow(2,3); //Outputs [Value1]^[Value2]
    std::cout << z << '\n';
    z = sqrt(81); //Outputs square root of value
    std::cout << z << '\n';
    z = abs(-144); //Outputs absolute value
    std::cout << z << '\n';
    z = round(x); //Rounds to nearest whole value
    std::cout << z << '\n';
    z = ceil(x); //Rounds up
    std::cout << z << '\n';
    z = floor(x); //Rounds down
    std::cout << z << '\n';

    return 0;
}