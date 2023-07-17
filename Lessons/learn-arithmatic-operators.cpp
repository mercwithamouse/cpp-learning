#include <iostream>

int main(){

    // arithmatic operators = return results of arithmatic operation following P/EMD/AS

    int students = 20; //Doesn't show decimal value

    //Addition
    students = students + 1;
    students+=1; //student = students + 1;
    students++; //students = students + 1;
    
    //Subtraction
    students = students -1;
    students-=1; //student = students - 1;
    students--; //student = students - 1;

    //Multiplication
    students = students * 2;
    students*=2; //student = students * 2;
    
    //Division
    students = students / 2;
    students /=2;

    int remainder = students % 3; //Modulus is remainining from division
    std::cout <<  students << '\n';
    std::cout <<  remainder << '\n';

    return 0;

}