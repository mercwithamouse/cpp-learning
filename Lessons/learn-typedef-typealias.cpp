#include <iostream>

 /*
 typedef  (and using)
    Reserved keyword
    Creates alias for another data type.
    Helps readability and reduces typos.
    Typically ends in _t (type)
    Only use when clear benefit
*/

#include <vector>
//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string; // more suitable fore templates
using number_t = int;
int main(){
    using std::cout;

    text_t firstName = "Olani";
    number_t age = 22;
    cout << firstName << '\n';
    cout << age << '\n';
    return 0;
}