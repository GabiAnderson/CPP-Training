/*

    Variables can be declared, initialized and assigned
        Declared: int i; simply states the variable should exist
        Initialized: int i {5}; combines both declaring and setting an initial value
        Assigned: i = 5; // often used when updating or changing variables, we assign it a new value

    Variables of all types can be assigned but we should be careful with data type auto
        If a auto variable is assigned a value not accurate with its data type the compiler will not get mad but will put in a garbage value

*/

#include <iostream>

int main()
{
    int var {123}; // declare and initialize
    std::cout << "Var value: " << var << std::endl;
    var = 55; // assign
    std::cout << "Var value: " << var << std::endl;

    auto var2 {333u};
    var2 = -22; // assign a negative number to an unsigned variable type
    // compiler does not error in this case, it just puts in a garbage value
    std::cout << "Danger assignment: " << var2 << std::endl;
    return 0;
}