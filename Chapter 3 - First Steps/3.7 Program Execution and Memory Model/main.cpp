/*
    The compiler turns the program into a binary format that is not human readable
    The binary file is loaded into memory and the CPU reads through the memory in order.

*/

int add_numbers(int a, int b)
{
    return a + b;
}

#include <iostream>

int main()
{
    int a = 10;
    int b = 5;
    int c;

    std::cout << "Statement 1" << std::endl;
    std::cout << "Statement 2" << std::endl;
    c = add_numbers(a, b);
    std::cout << "Statement 3" << std::endl;
    std::cout << "Statement 4" << std::endl;

    return 0;
}