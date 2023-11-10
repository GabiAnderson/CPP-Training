/*
    There are 3 types of errors/warnings

        Compile Time Errors - prevents the program from compiling (building) successfully
        Runtime Errors
        Warnings

*/

#include <iostream>

int main()
{
    // missing ; on line 15 - compile error - the IDE shows us there is an error with red underlines and the compiler shows us the error when attempting build
            /*
                        error: expected ';' before 'return'
                15 |     std::cout << "Hello World!" << std::endl
                    |                                             ^
                    |                                             ;
                16 |     return 0;
            */
    std::cout << "Hello World!" << std::endl
    return 0;
}