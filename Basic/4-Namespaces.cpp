#include <iostream>

namespace first{ // namespaces are outside of the main function
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){

    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

    // int x = 0;
    // int x = 1; // provides an error -> the variable x was previously declared already, can't redeclare x

    // using namespace std; // removes the need of prefixing shit with std:: -> std::cout is now cout, high likelyhood of clashing variable names
    using std::cout; // removes the need to write std::cout -> cout is sufficient now
    using std::string;
    using namespace first; // removes the need for the prefix "first" if there are no local variables of the same name, basically implicit 

    // int x = 0;

    std::cout << x << '\n';
    // std::cout << first::x << '\n'; // :: -> scope resolution operator
    std::cout << second::x << '\n';

    string yo = "Hello\n";
    cout << yo;
    
    return 0;
}