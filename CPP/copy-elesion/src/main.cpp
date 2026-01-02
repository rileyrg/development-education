// Local Variables:
// rmsbolt-command: "gcc -O0"
// rmsbolt-disassemble: nil
// End:



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

S make_value(int x) {
    return S(x);
}

int main() {
    S s = make_value(21);
    std::cout << "answer: " << s.x << "\n";
    return 0;
}
