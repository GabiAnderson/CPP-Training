/*

    'constinit' is new to C++20 - allows the ability to declare a variable with static storage duration

    It marks variables that must be initialized with compile-time constant expressions or constant-initialized constructors
    It also ensures initialization will be done during the static initialization phase
    It prevents the variables with static storage duration to be initialized at runtime

    Variables specificed with 'constinit' must be intitialized with a constant expression

    It cannot be used together with 'constexpr' or 'consteval'

    Format is - constinit T var = intitializer
        T = variable type
        var = variable name
        initializer = constant expression used for initialization

    Advantages
        Reliability - ensures variables are initialized in a controlled manner (that reduces the changes of unexpected behavior due to uninitialized and/or partially initialized variables)
        Static Initialization Order Control - programmer can manage order of initialization for the variable which will reduce the problem related to the static initialization order

    To use constinit in main you must use it with the keyword 'static'
    To initialize with the result of a function the function must utilize 'constexpr'

*/

#include <iostream>
using namespace std;

// declare a constinit var
constinit int x = 42;

// ERROR: coompiler warning that consinit cannot be paired with constexpr
constinit constexpr int x = 42;

constexpr int get_value()
{
    return 78;
}

int main()
{
    constinit int y = 12; // not ok bc no static
    constinit static int z = 5;
    constinit static int a = get_value(); // only ok because get_value includes 'constexpr'
    x = 12;
    std::cout << "x = " << x << std::endl;
    return 0;
}