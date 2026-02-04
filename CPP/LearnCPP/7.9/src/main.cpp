// 7.9 — Inline functions and variables
// https://www.learncpp.com/cpp-tutorial/inline-functions-and-variables/
#include <iostream>

inline int min(int x, int y) // inline keyword means this function is an inline function
{
    return (x < y) ? x : y;
}

int main()
{
    std::cout << min(5, 6) << '\n';
    std::cout << min(3, 2) << '\n';
    return 0;
}
