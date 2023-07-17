#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    //Declare Temp and Unit Variables
    double temp;
    char unit;
    double cvTemp;

    //Program Startup and Prompts
    cout << "**************CONVERTER START**************" << '\n';
    cout << "Enter Temperature: " << '\n';
    cin >> temp;
    cout << "C or F: " << '\n';
    cin >> unit;

    //Convert Temperatures
    //(x * 9/5) + 32 = C - F
    //(x - 32) * 5/9 = F - C
    switch(unit){
        case 'C':
            cvTemp = ((temp * (9.0/5)) + 32);
            cout << "That means it's: " << cvTemp << "F!" << '\n';
            break;
        case 'c':
            cvTemp = ((temp * (9.0/5)) + 32);
            cout << "That means it's: " << cvTemp << "F!" << '\n';
            break;
        case 'F':
          cvTemp = ((temp - 32) * (5.0/9));
            cout << "That means it's: " << cvTemp << "C!" << '\n';
            break;
        case 'f':
          cvTemp = ((temp - 32) * (5.0/9));
            cout << "That means it's: " << cvTemp << "C!" << '\n';
            break;
        default:
            cout << "Coming soon." << '\n';
            break;
    }

//Program End
cout << "**************CONVERTER START**************" << '\n';




    return 0;
}