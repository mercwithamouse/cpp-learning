#include <iostream>

int main() {
    using std::cin;
    using std::cout;

    /*
    Nested Loops:
    loops within loops
    loop type doesnt matter
    */

   //Define Variables
   int h;
   int w;
   char symbol;
    //Prompt user for H&W
   cout << "Enter Height:";
    cin >> h;
    cout << "Enter Width:";
    cin >> w;
    cout << "Enter Symbol: ";
    cin >> symbol;
    cout << "BEEP BOOP LOADING BEEP BOOP \n"; 
    //Draw Shape
    for(int i=1; i<=w; i++){
        for(int j=1; j<=h; j++){
            std::cout << symbol;
        }
    cout << '\n';
}
cout << '\n';
}