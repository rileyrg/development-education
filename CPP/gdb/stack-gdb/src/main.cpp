// 6.3 — Remainder and Exponentiation
// https://www.learncpp.com/cpp-tutorial/remainder-and-exponentiation/

#include <atomic>
#include <iostream>

constexpr bool isEven(const int x) {
    return (x % 2) == 0;
}


int main() {

    int x{3};

    x = 0;

    if (isEven(x)) {
        std::cout << x << " is even\n";
    } else {
        std::cout << x << " is odd\n";
    }

    *(int*)0 = 12;

    return 0; // (setq-local completion-at-point-functions nil)
}
