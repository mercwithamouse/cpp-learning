#include <iostream>

int main(){

    /*
    break = break out of loop
    continue = skip current iteration
    */

   for(int i=1; i <= 20; i++){ // Counts up from 1 until reaching 20
        std::cout << i << '\n';
        if (i == 13){ // if i = 13, skip current iteration and continue loop
            continue;
            
        }

   }
    return 0;
}