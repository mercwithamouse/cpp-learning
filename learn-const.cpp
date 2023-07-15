#include <iostream>

int main(){
    const double PI = 3.14159; // constant sets value to be immutable. Stylized in all caps. 
    double radius = 13;
    double cirumference = 2 * PI * radius;

    std::cout << cirumference << "cm";
     
    return 0;
}