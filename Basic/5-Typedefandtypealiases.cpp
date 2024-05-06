#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t; // typedef datatype newname, common naming convention is _t after the new name as type
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string; // the same thing as above but more popular
using number_t = int;


int main(){
    using std::cout;
    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type.
    //           New identifier for an existing type
    //           Helps with readability and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (works better with templates)

    // pairlist_t pairlist;

    text_t firstName = "Bro";
    std::cout << firstName << '\n';

    number_t age = 21;
    cout << age << '\n';

    return 0;
}