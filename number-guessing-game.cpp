#include <iostream>
#include <ctime>

//Number Guessing Game
int main(){
    using std::cin;
    using std::cout;
        //Define Guess and Live variables
        int guess;
        int lives = 3;

    //Prompt user for guess
    cout << "Guess the random number! (1-10): ";

    //Generate Number
    srand(time(NULL));
    int num = (rand() % 10) +1; 
    //std::cout << num << '\n';

    //Compare Guess and Random Number
    do{
    cin >> guess;
    if(guess == num){
        cout << "Congrats! You had " << lives << " guess(es) left. \n";
    }
    else{
       
        cout << "Try Again! \n";
        lives--;
        cout << lives << " Guess(es) Left! \n";
    }
    }
    while (lives>0);

    //Display Answer
    cout << "The answer was: " << num << ". \n";
}
    