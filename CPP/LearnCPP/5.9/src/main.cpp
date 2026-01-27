// 5.9 — std::string_view (part 2) https://www.learncpp.com/cpp-tutorial/stdstring_view-part-2/

#include <iostream>
#include <string>
#include <string_view>

// Be careful returning a std::string_view
// std::string_view can be used as the return value of a function. However, this is often dangerous.
// Because local variables are destroyed at the end of the function,
// returning a std::string_view that is viewing a local variable will
// result in the returned std::string_view being invalid, and further use
// of that std::string_view will result in undefined behavior. For
// example:


std::string_view getBoolName(bool b)
{
    std::string t { "true" };  // local variable
    std::string f { "false" }; // local variable

    if (b)
        return t;  // return a std::string_view viewing t

    return f; // return a std::string_view viewing f
} // t and f are destroyed at the end of the function


// In the above example, when getBoolName(true) is called, the function returns a std::string_view that is viewing t. However, t is destroyed at the end of the function. This means the returned std::string_view is viewing an object that has been destroyed. So when the returned std::string_view is printed, undefined behavior results.
// Your compiler may or may not warn you about such cases.
// There are two main cases where a std::string_view can be returned
// safely. First, because C-style string literals exist for the entire
// program, it’s fine (and useful) to return C-style string literals from
// a function that has a return type of std::string_view.


int main()
{
    std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n'; // undefined behavior

    return 0;
}
