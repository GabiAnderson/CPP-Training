/*

    Relational operators (aka comparing operators)
    >
        less than
    <
        greater than
    >=
        less than or equal
    <=
        greater than or equal
    ==
        equals (different than assignment)
    !=
        not equals

    Jhe result of these operators is always going to evaluate to a boolean - true (1) or false (0)

*/

#include <iostream>

int main()
{
    int number1{20};
    int number2{20};

    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;

    std::cout << std::boolalpha; // Make bool show up as true/false instead of 1/0
    // cout does not accept some comparisons/operations/etc as input unless they are in ()
    //      will get a compiler error due to operator precedence if we ommit the () here
    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

    std::cout << std::endl;
    std::cout << "store comparison result and use it later" << std::endl;

    bool result = (number1 == number2);

    std::cout << number1 << " == " << number2 << " : " << result << std::endl;
    return 0;
}