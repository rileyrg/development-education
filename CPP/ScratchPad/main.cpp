#include <iostream>
#include <vector>

int main() {
    std::vector<int> values{1, 2, 3, 4, 5};
    for (auto i : values) {
        std::cout << values[i] << std::endl;
    }
    std::cin.get();
}
