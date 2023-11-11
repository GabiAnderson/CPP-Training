/*

    Unlike implicit conversion, which is done automatically by the compiler, explicit conversion is user-defined

    It is also commonly called type casting

    The user typecasts the result to make it of a particular data type
    
    There are 2 ways to do it
        1. Converting by assignment (forceful casting)
            Format - (type) expression
            Defining the required type in front of the expression in parethesis
            Example: int sum = (int)4.2 + 1;
        2. Conversion using Cast
            A cast operator is an unary operator which forces one data type to be converted to another
            There are four types of casting
                Static
                    Compile time case
                    Syntax: static_cast<type>(var)

                The rest will be good to know in the future but a little advanced for where the course is now

                Dynamic
                    Safe downcasting at runtime
                    Requires virtual function in base class
                    Works only polymorphic base class because it uses this info to decide safe downcasting
                Const
                    Used to cast away the constness of variables
                    Facts
                        Can be used to change non-const class members inside a const member function
                        Can be used to pass const data to a function that doesn't receive const
                        It is undefined behavior to modify a value which is intially declared as const
                        Safter than simple type casting (in that, casting won't happen if the type of cast is not the same as original object)
                        Can be used to cast away volite attribute
                Reinterpret
                    Used to convert a pointer of some data type to a pointer of another type (even if the data types before and after conversion are different)
                    Does not check if the pointer type and data pointed by the pointer is the same or not

*/

#include <iostream>

int main()
{
    // Assignment conversion
    int sum = (int)4.2 + 1;
    std::cout << "4.2 + 1 = " << sum << std::endl;

    // Static Cast
    float f = 3.5;
    int b = static_cast<int>(f);
    std::cout << "3.5 Static cast to int: " << b << std::endl;
    

    double x {12.5};
    double y {34.6};
    sum = x + y;
    std::cout << "Implicit cast sum = " << sum << std::endl;
    // Static cast elements then sum
    std::cout << "Static cast then sum = " << (static_cast<int>(x) + static_cast<int>(y)) << std::endl;
    // Sum elements then static cast - same as implicit cast
    std::cout << "Sum then static cast = " << static_cast<int>
    (x + y) << std::endl;
    return 0;
}