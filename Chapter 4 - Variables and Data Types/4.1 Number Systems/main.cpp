/*

    There are 3 types of number systmes
        Binary - 0s and 1s
        Octal - 0 through 7
        Hexidecimal - 0 through 9 and A through F



    Binary - base 2
        each 1/0 is a bit - 9 bits is a single byte
         0  |  0  |  0  |  0
        2^3 | 2^2 | 2^1 | 2^0

        so 111 = (1 * 2^2) + (1 * 2^1) + (1 * 2^0) = 7
        
        With n digits we can represent numbers from 0 to ((2^n) - 1)
        So with 8 digits we can represent from 0 to 255

        We use 0b to showcase the number is a binary (0b1111)

    Octal - base 8
        Goes from 0 to 7. We can represent groups of 3 binary numbers to simplify the representation of binary

        000 = 0
        111 = 7

        We use 0 followed by a space or just a starting 0 to showcase the number is an octal (0 7 or 0 0 or 07 or 00)
        
        Octal and Hex have the same goal, simplify binary, but octal is not really used anymore

    Hexidecimal
        Used to simplify binary a lot - split binary into groups of 4 bits and represent that using 0-9 and A-F

        Using 4 bits we can represent 0 to 15. So we use 0-F to represent the 4 bits
        0000 = 0
        1111 = F

        We use 0x to showcase the number is a hexidecimal (0xF or 0x0)

*/

#include <iostream>

int main()
{
    // We store the number using different number systems
    //   in memory it is actuall stored the same but here it displays different
    int decimal = 15;
    int octal = 017;
    int hex = 0x0F;
    int binary = 0b00001111;

    // But the numbers print decimal regardless of what we store them as
    std::cout << "Decimal: " << decimal << std::endl;
    std::cout << "Octal: " << octal << std::endl;
    std::cout << "Hexidecimal: " << hex << std::endl;
    std::cout << "Binary: " << binary << std::endl;

    return 0;
}