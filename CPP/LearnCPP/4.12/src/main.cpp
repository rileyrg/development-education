// https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/

#include <iostream>

void print(double x) // print takes a double parameter
{
	std::cout << x << '\n';
}

int main()
{
    print(5);  // what happens when we pass an int value?

    int y { 5 };
    print(y);  // y is of type int
    

	return 0;
}
