// 6.3 — Remainder and Exponentiation
// https://www.learncpp.com/cpp-tutorial/remainder-and-exponentiation/

#include <iostream>

bool isEven(int x) {
    return (x % 2) == 0;
}

int main() {
    std::cout << "Hello World\n";

    int x{3};

    x=0;

    if (isEven(x))
        std::cout << x << " is even\n";
    else
        std::cout << x << " is odd\n";

    *(int *)x=12;

    return 0;
}
