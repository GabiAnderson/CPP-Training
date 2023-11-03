
/*

    Fractional numbers (or commonly called floating point numbers) can be represented with 3 different data types
        Float - 4 bytes, 7 prevcision
        Double - 8 bytes, 15 precision (RECOMMENDED DEFAULTS)
        Long Double - 12 bytes, > double precision

    Precision is the number of bits that can be representated (including the number in front of the decimal)
        1.23456700001 = 12 precision (cannot use float to represent this)
        122.2345670001 = 14 precision


*/
#include <iostream>

int main()
{
    // declare and initialize
    float float_var (1.12345678901234567890f);
    double double_var {1.12345678901234567890};
    long double long_double_var {1.12345678901234567890L};
    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;


    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;
    return 0;
}