#include <iostream>
#include <vector>
int main() {
    std::vector<int> values;
    values = std::vector<int>{1, 2, 3, 4, 5};

    auto placeholder = 99;
    values.push_back(placeholder);
    for (int i : values) {
        std::cout << values[i] << std::endl;
    }
    return 0;
}
