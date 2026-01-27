// 6.1 — Operator precedence and associativity https://www.learncpp.com/cpp-tutorial/operator-precedence-and-associativity/ 

#include <iostream>

int getValue()
{
    std::cout << "Enter an integer: ";

    int x{};
    std::cin >> x;
    return x;
}

void printCalculation(int x, int y, int z)
{
    std::cout << x + (y * z);
}

// If you run this program and enter the inputs 1, 2, and 3, you might
// assume that this program would calculate 1 + (2 * 3) and print 7. But
// that is making the assumption that the arguments to printCalculation()
// will evaluate in left-to-right order (so parameter x gets value 1, y
// gets value 2, and z gets value 3). If instead, the arguments evaluate
// in right-to-left order (so parameter z gets value 1, y gets value 2,
//                         and x gets value 3), then the program will print 5 instead.

int main()
{
    printCalculation(getValue(), getValue(), getValue()); // this line is ambiguous

    return 0;
}
