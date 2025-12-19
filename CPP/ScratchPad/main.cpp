#include <iostream>
#include <vector>

void foo(int x)
{
    int buf[10];
    buf[x] = 0;
    auto placeholder = x == 1000;
    if (placeholder) {
    }

    char a[10];
    a[10] = 0;

    int *p;
    p = new int[10];
}

int main() {
    std::vector<int> values = {11, 12, 13, 14, 15};
    values.push_back(99);
    for (const auto&  i:values) {
        // for (int i=0; i<values.size();i++) {
        std::cout << i << "\n";
    }
    foo(1);
    return 0;
}
