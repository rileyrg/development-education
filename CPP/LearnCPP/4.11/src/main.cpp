// https://www.learncpp.com/cpp-tutorial/chars/
#include <iostream>

int add(int x, int y)
{
    return x + y;
}


int main()
{
    std::cout << "\"This is quoted text\"\n";
    std::cout << "This string contains a single backslash \\\n";
    std::cout << "6F in hex is char '\x6F'\n";

    std::cout << add(1, 2) << '/n';  // we used a forward slash
    // instead of

    int x { 5 };
    std::cout << "The value of x is " << x << '!\n';  // added
    // exclamation
    // point
                                                       
    
    return 0;
}
