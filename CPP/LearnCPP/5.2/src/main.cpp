#include <iostream>

int main()
{
    std::cout << 5.0 << '\n';  // 5.0 (no suffix) is type double (by default)
    std::cout << 5.0f << '\n';  // 5.0f is type float

    double pi { 3.14159 }; // 3.14159 is a double literal in standard notation
    double d { -1.23 };    // the literal can be negative
    double why{0.};        // syntactically acceptable, but avoid this
    // because it's hard to see the decimal point
    // (prefer 0.0)

    double avogadro { 6.02e23 }; // 6.02 x 10^23 is a double literal in scientific notation
    double protonCharge{1.6e-19};  // charge on a proton is 1.6 x 10^-19
    

    return 0;
}
