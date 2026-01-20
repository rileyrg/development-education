// https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/

#include <iostream>

void print(int x) // print now takes an int parameter
{
	std::cout << x << '\n';
}

int main()
{
	print(5.5); // warning: we're passing in a double value

	return 0;
}
