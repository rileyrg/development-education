// https://www.learncpp.com/cpp-tutorial/constant-variables-named-constants/

int main()
{
    const double gravity; // error: const variables must be initialized
    gravity = 9.9;        // error: const variables can not be changed

    return 0;
}
