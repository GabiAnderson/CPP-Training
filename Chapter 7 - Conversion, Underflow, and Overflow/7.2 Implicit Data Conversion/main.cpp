/*

    Implicit conversion occurs when an expression of some type T1 is used in context that does not accept that type but accepts some other type T2
        1. when the expression is used as the argument when calling a function that is declared with T2 as a parameter
        2. when the expression is used as an operand with an operator that expects T2
        3. when initializing a new object of T2, including return statement in a function returning T2
        4. when the expression is used in a switch statement (T2 is integral type)
        5. when the expression is used in an if statement or loop (T2 is a bool)

    Conversions are always done from smallest to largest type

*/

#include <iostream>

// Example for case 1
void print_num(double num)
{
    std::cout << num << std::endl;
}

double divide(int a, int b)
{
    return a / b; // Example of case 3 (part 2 return statement) - implicit conversion from int to double
}

int main()
{
    int a = 42;
    print_num(a); // Example of case 1 - a is type int, print_num params call for double => implicit conversion from int to double
   
    int b = 12;
    int c = b / 2.0; // Example of case 2 - / asks for doubles not ints - implicit conversion from int to double
    
    double d = 3; // Example of case 3 (part 1 initialization) - no .0 for double - implicit conversion from int to double
    
    int e = 3;
    switch(e)
    {
        case 1:
            break;
    }

    // Example of case 5 - non bool type used in bool type loop
    int f = 4;
    if (f)
    {
        std::cout << "The value " << f << " is true." << std::endl;
    }
    while(f)
    {
        std::cout << "Looping..." << std::endl;
        f--;
    }


    // MORE EXAMPLES
    double price {46.5};
    int units {5};
    // units will be implicitly converted to double
    //      bc smallest to largest, int is transformed to double before expression is evaluated
    auto total = price * units;

    int x;
    double y {45.4};
    x = y; // implicit double to int
    return 0;
}