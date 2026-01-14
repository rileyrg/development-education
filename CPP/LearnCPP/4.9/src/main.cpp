// https://www.learncpp.com/cpp-tutorial/boolean-values/

#include <iostream>

// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
    return x == y; // operator== returns true if x equals y, and false otherwise
}

int main()
{
    std::cout << true << '\n';
    std::cout << false << '\n';

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << true << '\n';
    std::cout << false << '\n';


    bool b{};
    std::cout << "Enter a boolean value: ";

    // Allow the user to input 'true' or 'false' for boolean values
    // This is case-sensitive, so True or TRUE will not work
    std::cin >> std::boolalpha;
    std::cin >> b;

    // Let's also output bool values as `true` or `false`
    std::cout << std::boolalpha;
    std::cout << "You entered: " << b << '\n';

    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << x << " and " << y << " are equal? ";
    std::cout << isEqual(x, y) << '\n';  // will return true or false
    
    
    return 0;
}
