#include <iostream>
#include <vector>
#include <array>

void foo(int x)
{

    int buf[10];
    buf[x] = 0;
    auto placeholder = x == 1000;
    if (placeholder) {
    }

    int yy;
    
    std::array<int,3>  arr={1,2,3};
    arr[1] = 0;
    int const* p = new const int[3] {
        1,
        2,
        3};
    //delete [] p;
}

auto main() -> int {
    std::vector<int> values = {11, 12, 13, 14, 15};
    values.push_back(99);
    for (const auto&  i:values) {
        // for (int i=0; i<values.size();i++) {
        std::cout << i << "\n";
    }
    foo(1);
    return 0;
}
