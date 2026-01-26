// https://www.learncpp.com/cpp-tutorial/the-as-if-rule-and-compile-time-optimization/

#include <iostream>

int main()
{
	const int x { 7 }; // x is now const
	std::cout << x << '\n';

	return 0;
}
