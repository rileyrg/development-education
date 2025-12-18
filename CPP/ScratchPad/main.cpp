#include <iostream>
#include <vector>
int main() {
    std::vector<int> values = {1, 2, 3, 4, 5};
    auto placeholder = 99;
    values.push_back(placeholder);
    for (int i=0; i < values.size();i++) {
        std::cout << values[i] << "\n";
    }
    return 0;
}
