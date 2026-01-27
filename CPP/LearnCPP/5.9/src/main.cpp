// 5.9 — std::string_view (part 2) https://www.learncpp.com/cpp-tutorial/stdstring_view-part-2/

#include <iostream>
#include <string>
#include <string_view>

void printSV(std::string_view str) // now a std::string_view, creates a view of the argument
{
    std::cout << str << '\n';
}

// std::string_view takes a different approach to initialization. Instead of making an expensive copy of the initialization string, std::string_view creates an inexpensive view of the initialization string. The std::string_view can then be used whenever access to the string is required.

// In the context of our analogy, std::string_view is a viewer. It views an object that already exists elsewhere, and cannot modify that object. When the view is destroyed, the object being viewed is not affected. Having multiple viewers viewing an object simultaneously is fine.

// It is important to note that a std::string_view remains dependent on the initializer through its lifetime. If the string being viewed is modified or destroyed while the view is still being used, unexpected or undefined behavior will result.

// Whenever we use a view, it is up to us to ensure these possibilities
// do not occur.


int main()
{
    printSV("Hello, world!"); // call with C-style string literal

    std::string s2{ "Hello, world!" };
    printSV(s2); // call with std::string

    std::string_view s3 { s2 };
    printSV(s3); // call with std::string_view

    return 0;
}
