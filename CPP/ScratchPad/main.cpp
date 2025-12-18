#include <iostream>
#include <vector>
int main() {
    std::vector<int> values = {11, 12, 13, 14, 15};
    values.push_back(99);
    for (auto i:values) {
    // for (int i=0; i<values.size();i++) {
        std::cout << i << "\n";
    }
    return 0;
}
