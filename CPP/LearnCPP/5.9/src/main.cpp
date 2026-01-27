// 5.9 — std::string_view (part 2) https://www.learncpp.com/cpp-tutorial/stdstring_view-part-2/

#include <iostream>
#include <string>
#include <string_view>


// Invalidated objects can often be revalidated (made valid again) by
// setting them back to a known good state. For an invalidated
// std::string_view, we can do this by assigning the invalidated
// std::string_view object a valid string to view.


int main()
{
    std::string s { "Hello, world!" };
    std::string_view sv { s }; // sv is now viewing s

    s = "Hello, universe!";    // modifies s, which invalidates sv (s is still valid)
    std::cout << sv << '\n';   // undefined behavior

    sv = s;                    // revalidate sv: sv is now viewing s again
    std::cout << sv << '\n';   // prints "Hello, universe!"

    return 0;
}
