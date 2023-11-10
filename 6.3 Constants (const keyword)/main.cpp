/*

    The 'const' keyword acts a prefix to variables to declare variables as non-changably/read-only


    Const variables cannot be left uninitialized
        Cannot do: const int var;
    Const variables cannot be assigned value anywhere in program
        Cannot do: const int var; var = 5;
    Explicit value needs to be provided to const variable at time of declaration
        Have to do: const int var = 5;

*/

#include <iostream>

int main()
{
    const int var {5};
    std::cout << "Before changes: " << var << std::endl;

    // compiler gets angry at all of these because var is declare as const and thus is not a modifiable value
    var = 12;
    var += 2;

    // compiler gets angry that this is missing an initializer
    const int var2;

    return 0;
}