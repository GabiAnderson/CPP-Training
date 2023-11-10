/*

    'constexpr' was added in C++11

    Idea was to increase performance by doing computations at compile time instead of run time
        Spend time in compilation (developer's time) to save time in run-time (user's time)

    'constexpr' specifies that the value of an object/function can be evaluated at compile-time and the expression can be used in other constant expressions

    Rules for functions with 'constexpr'
        Must contain only one return type (C++14 allows for more than one)
        Refer only to global variables
        Can only call other 'constexpr' functions
        Should not be of type void
        Prefix increment (++v) not allowed (but allowed in C++14 and higher)

    'constexpr' main goal is optimization
        Removes function calls as it evaluates code/expressions in compile time
        Allows for possible assessment of value of variable or function at compile time
        Does not imply external linkage

*/

#include <iostream>

constexpr int product(int x, int y)
{
    return (x * y);
}

int main()
{
    constexpr int x = product(10, 20);
    int arr[product(2, 3)] = {1, 2, 3, 4, 5, 6}; // evaluate size of array at compile-time (not possible before)
    std::cout << x << std::endl;
    std::cout << arr[5];
    return 0;
}