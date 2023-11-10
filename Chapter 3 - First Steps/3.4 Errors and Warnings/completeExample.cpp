/*
    There are 3 types of errors/warnings

        Compile Time Errors - prevents the program from compiling (building) successfully
        Runtime Errors - project compiles successfully the resulting program does not act as espected - it is a logical error that causes the program to fail or even crash
        Warnings - do not prevent the compiliation but just give a little insight into where you may be doing something bad


    In all cases, the IDE and the compiler will do there best to catch compile time errors and warnings - it is a little more up to the programmer to detect run-time errors

*/

#include <iostream>

int main()
{
    // compile time error - bc no ;
    std::cout << "Hello World!" << std::endl

    // run time error - bc divide by 0 results in 2nd print not displaying
    int val = 7/0;
    std::cout << val << std::endl;

    // warning - because divide by 0
    7/0;
    return 0;
}