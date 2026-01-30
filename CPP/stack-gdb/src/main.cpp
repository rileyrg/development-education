
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

    return 0;
}
