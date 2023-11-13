
/*

    Fractional numbers (or commonly called floating point numbers) can be represented with 3 different data types
        Float - 4 bytes, 7 precision
        Double - 8 bytes, 15 precision (RECOMMENDED DEFAULTS)
        Long Double - 12 bytes, > double precision

        We can get narrowing errors (like seen before) if we do larger numbers

    Precision is the number of bits that can be representated (including the number in front of the decimal)
        1.23456700001 = 12 precision (cannot use float to represent this)
        122.2345670001 = 14 precision

    Declaring precision
        when printing floats/doubles/etc - we can control the output precision with std::prevision(int)
            std::cout << std::setprecision(20); // sets cout to only print 20 digits of the value
        this precision will hold until it is changed in the future

    Scientific Notation
        We can use e in our numbers for scientific notation in our floats, doubles, and long doubles
            3.498e-11 = 3.498 * (10^-11)
            192400023 = 1.92400023e8
        Helps us make sense of extremely large/small values

    Floating Points (can do more than ints)
        Can divide by 0 - if the number is positive we get +infinity (inf), if the number is negative we get -infinity (-inf)
        If we do 0.0/0.0 we get NaN (not a number)

    Suffix Declaration
        If a suffix is not included the default is a double
            f for float
                1.12345678901234567890f
            L for long double
                1.12345678901234567890L
            nothing for double
        It is important to include the suffix because if not the compiler will attempt to treat values as doubles which can cause loss of precision or unintended behavior that might occur during implicit conversion


*/
#include <iostream>
#include <iomanip> // required for std::setprecision

int main()
{
    // Fractional Numbers - declare and initialize
    // Suffix Declaration - ensure variables are assigned their desired type
    std::cout << std::setprecision(20);
    float float_var (1.12345678901234567890f);
    double double_var {1.12345678901234567890};
    long double long_double_var {1.12345678901234567890L};
    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;


    std::cout << "Float Val: " << float_var << std::endl;
    std::cout << "Double Val: " << double_var << std::endl;
    std::cout << "Long Double Val: " << long_double_var << std::endl;

    float narrowing_error {19240023.0f}; // error: narrowing conversion (compiler silently fixes it whereas with ints it did not)
    double no_narrowing_error {19240023.0};
    std::cout << "Narrowing error: INIT val 19240023.0f  ACTUAL: " << narrowing_error << std::endl;
    std::cout << "No Narrowing error: INIT val 19240023.0f  ACTUAL: " << no_narrowing_error << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    // Declaring Prevision - sets cout to only print 5 digits of the value
    std::cout << std::setprecision(5);
    std::cout << "Precision Check" << std::endl;
    std::cout << "Float Val: " << float_var << std::endl;
    std::cout << "Double Val: " << double_var << std::endl;
    std::cout << "Long Double Val: " << long_double_var << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    // Scientific Notation
    double a {192400023};
    double b {1.92400023e8};
    std::cout << "Scientific Notation Check" << std::endl;
    // a and b look different here but print the same in our output and are marked as equals because they are the same value but one is in scientific notation and one is not
    std::cout << "A: " << a << " B: " << b << " Equal?: " << (a == b) << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    // Floating Points (can do more than ints)
    double num1 {5.6};
    double num2 {}; // 0
    double num3 {}; //0

    std::cout << "Inf and NaN Check" << std::endl;
    double infinity_check {num1 / num2};
    std::cout << "Infinity Check +: " << infinity_check << std::endl;
    num1 = -5.6;
    infinity_check = num1 / num2;
    std::cout << "Infinity Check -: " << infinity_check << std::endl;
    
    double nan_check {num2 / num3};
    std::cout << "NaN Check: " << nan_check << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    return 0;
}

/*

    OUTPUT RESULTS: 
        sizeof float: 4
        sizeof double: 8
        sizeof long double: 16
        Float Val: 1.1234568357467651367
        Double Val: 1.1234567890123456912
        Long Double Val: 1.1234567890123456789
        Narrowing error: INIT val 19240023.0f  ACTUAL: 19240024
        No Narrowing error: INIT val 19240023.0f  ACTUAL: 19240023
        -----------------------------------------
        Precision Check
        Float Val: 1.1235
        Double Val: 1.1235
        Long Double Val: 1.1235
        -----------------------------------------
        Scientific Notation Check
        A: 1.924e+08 B: 1.924e+08 Equal?: 1
        -----------------------------------------
        Inf and NaN Check
        Infinity Check +: inf
        Infinity Check -: -inf
        NaN Check: nan
        -----------------------------------------

*/