/*

    Happens when you try to assign a value to a data type that is either too big or too small

    Overflow - try to store a value larger than the data type holds
        char (or small int) holds 0 to 255 - attempting to assign 300 results in overflow

    Underflow - try to store a value that is too small for the data type
        char (or small int) holds 0 to 255 - attempting to assign -5 results in underflow

    This can cause hard to find bugs because the values look fine, math looks fine, etc but the contents
        of variables does not match expected answer

    Let's look at an example
        unsigned custom type foo is 1/2 byte long = 1 nibble = 4 bits
        Can store 0 (0000) to 15 (1111)
        Overflow
            Let foo f = 15;
            f = f + 15 => 1111 + 0001 = 10000 (16) which does not fit in the foo type
            We have an extra bit (an extra 1 - carryover) that has no where to go
            The extra one is overflow and is lost
            Print f results in 0 because without the 1 in 10000, the result is 0000
            So f does not hold 16 as expected, it actually holds 0
        Underflow
            Let foo f = 0;
            f = f - 1 => 0000 - 0001 => 11110 (because each location continues to 'borrow' to get the 1 it needs) - 0001 = 1111
            We had to fake borrow to get the bits we need to do the subtraction
            Printing f results in 15 because with the borrowing of extra bits we expanded our number
            So f does not hold -1 as expected, it actually holds 15

        Think of it like counter clicker but counting backwards instead of forwards
            Overflow - When the clicker goes up from 00 to 99, once you reach 00 the next click rolls
                everything back to 00 because the 1 of the 100 is not displayed and thus lost
            Underflow - When you count down from 99 to 00, after hitting 00 there is not where else to go
                so the whole things rolls back to the beginning at 99      

*/

#include <iostream>

int main()
{
    // unsigned short range: 0 to 65535
    unsigned short smallest = 0;
    std::cout << "Smallest start: " << smallest << std::endl;
    smallest--; // underflow
    // Logic says smallest should hold -1, but because all the bits reset (clicker) the actual result is 65535
    std::cout << "Smallest - 1: " << smallest << std::endl;
    
    unsigned short largest = smallest; // because it holds the largest val from the underflow example
    std::cout << "Largest start: " << largest << std::endl;
    largest++; // overflow
    // Logic says largest should hold 65536, but because bits carryover to next section the actual result is 0
    std::cout << "Largest + 1: " << largest << std::endl;
    
    unsigned short t = 30000;
    std::cout << "Starting point: " << t << std::endl;
    t = t * 3;
    // not enough bits to hold 90,0000 so we just get some 'garbage' value
    /*
    
        it is not really garbage, it is the bits as they would need to be if we could hold them all to display 900000
        90,000 = 010101111110010000
        24464 =  XX0101111110010000

        We can see the value is the same just the excess bits got cut off

        We call this a 'garbage' value because it is not what we wanted/expected but it is not as if the compiler
            is just putting a random value here, we simply just cannot see what the actual value was because some 
            of it got lost so it is useless as we needed it
    */
    std::cout << "* 3: " << t << std::endl;
    return 0;
}