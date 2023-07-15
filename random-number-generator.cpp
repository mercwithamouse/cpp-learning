#include <iostream>
#include <ctime>

int main(){

    //psuedo-random = NOT true random (close tho)
    
    //Roll 6 Sided Die:
    srand(time(NULL)); //initializes random-number-generator (srand) and seed. Common seed is current time (time()). 
    int num = (rand() % 6) +1;  //Generates random number, gives modulus (1-5) and adds 1 (1-6).
    int num2 = (rand() % 6) +1;
    int num3 = (rand() % 6) +1;
    std::cout << num << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
    return 0;
}