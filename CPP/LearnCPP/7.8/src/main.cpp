// 7.8 — Why (non-const) global variables are evil
// https://www.learncpp.com/cpp-tutorial/why-non-const-global-variables-are-evil/

#include <iostream>

double getGravity(); // forward declaration

int main()
{
    std::cout << getGravity() << '\n';

    return 0;
}
