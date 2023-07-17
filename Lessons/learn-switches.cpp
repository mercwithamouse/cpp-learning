#include <iostream>

int main()
{
    /*
    Switch
    Alternative to using "else if" statements
    Compares one value to matching cases
    More efficient and easier to read
    */
    using std::cout;

    int month;
    std::cout << "What month is it? (1-12) ";
    std::cin >> month;

    switch(month){
        case 1:
            cout << "It is January";
            break;
        case 2:
            cout << "It is February";
            break;
        case 3:
            cout << "It is March";
            break;
        case 4:
            cout << "It is April";
            break;
        case 5:
            cout << "It is May";
            break;
        case 6:
            cout << "It is June";
            break;
        case 7:
            cout << "It is July";
            break;
        case 8:
            cout << "It is August";
            break;
        case 9:
            cout << "It is September";
            break;
        case 10:
            cout << "It is October";
            break;
        case 11:
            cout << "It is November";
            break;
        case 12:
            cout << "It is December";
            break;
        default: // Comparable to else statement
        std::cout << "Liar!";
    }

    char grade;
    std::cout << '\n' << "Enter your letter grade: ";
    std::cin >> grade;
    switch(grade){
    case 'A':
        cout << "Great";
        break;
    case 'B':
        cout << "Good";
        break;
    case 'C':
        cout << "Okay";
        break;
    case 'D':
        cout << "Bad";
        break;
    case 'F':
        cout << "Lmao";
        break;
    default:
        cout << "Enter A-D & F";
        break;
    }
}