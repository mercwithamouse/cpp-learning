#include <iostream>

 /*
    Namespaces:
    Prevents name conflicts
    Each entity has a unique name
    Allows identically named entities as long as namespaces are different.
    */

namespace first{
    int x=1;
}
namespace second{
     int x=2;
}
int main() {
    using namespace second;
    //using namespace std IS A BAD PRACTICE. CONFLICT CHANGE IS HIGH.
    using std::cout; //Much safer, allows you to simply type cout
    using std::string; //And so on, specify exactly what you're using frequently
    //int x = 0;

    cout << x; //If namespace isn't defined, local variable is defaulted to.
    cout << first::x; //Namespace is called by: [namespace]::[variable]

    return 0;
}  