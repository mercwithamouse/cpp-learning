#include <iostream>
#include <ctime>

int main(){

    //psuedo-random = NOT true random (close tho)

    srand(time(NULL));
    int randNum = (rand() % 5) +1; 
    switch(randNum){
        case 1: std::cout << "You win a million dollars!\n";
                break;
        case 2: std::cout << "You win a dollar!\n";
                break;
        case 3: std::cout << "You win a lion lars!\n";
                break;
        case 4: std::cout << "You win a ill doll!\n";
                break;
        case 5: std::cout << "You win a ion.\n";
                break;
    }
    return 0;
}