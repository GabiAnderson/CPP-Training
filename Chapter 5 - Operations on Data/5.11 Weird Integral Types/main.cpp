/*

    Integral types less than 4 bytes in size don't support arithmetic operations
        Things like char and short int
        These types will implicitly convert these types to standard int when arithmetic operations are performed

    Int is the smallest type that can perform arithmetic operations (and other operatios like bitwise shift << and >>)
*/

#include <iostream>

int main()
{
    // short int => 2 bytes
    short int var1 {10};
    short int var2 {20};

    // char => 1 byte
    char var3 {40};
    char var4 {50};

    // no issues - aka no implicity conversion
    std::cout << "size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << std::endl;

    // ISSUES - implicity conversion bc arithmetic
    // auto should deduce to the same type as that in the operation but because arithmetic and short int/char
    //      auto deduces to int
    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "size of result1 : " << sizeof(result1) << std::endl;
    std::cout << "size of result2 : " << sizeof(result2) << std::endl;
    return 0;
}