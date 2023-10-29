/*
    There are 3 types of errors/warnings

        Compile Time Errors
        Runtime Errors - project compiles successfully the resulting program does not act as espected - it is a logical error that causes the program to fail or even crash
        Warnings

*/

#include <iostream>

int main()
{
    std::cout << "Hello World!" << std::endl;

    // it is hard to show but something like this shows we don't get the expected 2nd print statement (this kind of mixes warnings and runtime because /0 is a warning)
    int val = 7/0;
    std::cout << val << std::endl;
    return 0;
}