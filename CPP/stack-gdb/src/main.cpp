// 6.3 — Remainder and Exponentiation
// https://www.learncpp.com/cpp-tutorial/remainder-and-exponentiation/

#include <iostream>

constexpr bool isEven(int x)
{
    // if x % 2 == 0, 2 divides evenly into our number, which means it must be an even number
    return (x % 2) == 0;
}

int main()
{
    int x{3};

    x=0;

    if (isEven(x))
        std::cout << x << " is even\n";
    else
        std::cout << x << " is odd\n";

    *(int *)0=12;

    return 0;
}
