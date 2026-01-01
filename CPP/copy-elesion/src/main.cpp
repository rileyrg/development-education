#include <iostream>
#include <utility>

struct S {

    int x;
    explicit S(int x) : x{x} {
        std::cout << "construct S(" << x << ")\n";
    }

    S(const S& other) : x{other.x} {
        std::cout << "copy S(" << x << ")\n";
    }
};

int main() {
    S s(21);
    std::cout << "answer: " << s.x << "\n";
    return 0;
}
