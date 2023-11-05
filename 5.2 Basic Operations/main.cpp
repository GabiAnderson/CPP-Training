/*

    Addition +
    Subtraction -
    Division /
    Multiplication *
    Modulus %

    Ints and Basic Operations
        Integer division does not result in fractional numbers. If 31 / 10, the result will be 3 as 10 fits into 31 3 times
        Integer division remainders can be found with modulus %, 31 % 10 is 1 as the remainder of 31/10 is 1

*/
#include <iostream>

int main()
{
    int number1{2};
    int number2{7};
    std::cout << "Val 1: " << number1 << " Val 2: " << number2 << std::endl;

    // Addition
    int result = number1 + number2;
    std::cout << "Addition result : " << result << std::endl;

    // Subtraction
    result = number2 - number1;
    std::cout << "Subtraction result : " << result << std::endl;

    result = number1 - number2;
    std::cout << "Subtraction result 2 : " << result << std::endl;

    // Multiplication
    result = number1 * number2; // 2 can fit in 7 only 3 times, remainder of int division is cut off
    std::cout << "Multiplication result : " << result << std::endl;

    // Division
    result = number2 / number1;
    std::cout << "Division result : " << result << std::endl;

    // Modulus
    result = number2 % number1;                      // 7 % 2
    std::cout << "Modulus result : " << result << std::endl; // 1

    result = 31 % 10;
    std::cout << "Modulus result 2 : " << result << std::endl; // 1
    return 0;
}