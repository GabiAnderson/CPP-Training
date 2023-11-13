/*

    By default, std::cout will print ints in decimal

    We have seen std::dec, std::oct, and std::hex that allow us to print ints in decimal, octal, and hexidecimal

    There is another library, bitset, that allows us to print in binary

    We can use 'std::bitset<size>' in a few ways
        - To print an int
            std::cout << std::bitset<size>(varName) << std::endl;

            This will print varName as a binary number using #size bits
        - To declare/initialize a variable
            std::bitset<size> varName(value)
            
            This will declare/initialize varName with value (in decimal - i.e. value can be a dec # without issues) but will print it as a binary number using #size bits
        - To declare a variable
            std::bitset<size> varName

            This will initialize a binary number of #size bits with all bits set to 0
        - To initialize a variable with a binary string
            bitset<size> variable_name(string("BINARY_STRING");
            bitset<size> variable_name("BINARY_STRING");

            This sets the value to exactly as the string but will fill to #size bits


    bitset has a few member functions but that is not important for this lesson

*/

#include <iostream>
#include <bitset>


int main(){

    unsigned short int data {15};

    std::cout << "data (dec) : " <<std::showbase <<  std::dec << data << std::endl;
    std::cout << "data (oct) : " <<std::showbase <<  std::oct << data << std::endl;
    std::cout << "data (hex) : " <<std::showbase <<  std::hex << data << std::endl;
    // Print an int
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;

    // Declare/initialize a variable
    std::bitset<16> databit(15);
    std::cout << "data var (bin) : " << databit << std::endl;

    // Declare a variable
    std::bitset<16> var;
    std::cout << "uninitialized var : " << databit << std::endl;

    // Initialize with binary string
    std::bitset<8> stringBitset(std::string("1111"));
    std::cout << "binary string : " << databit << std::endl;
   
    return 0;
}

/*
    OUTPUT RESULTS:
        data (dec) : 15
        data (oct) : 017
        data (hex) : 0xf
        data (bin) : 0000000000001111
        data var (bin) : 0000000000001111
        uninitialized var : 0000000000001111
        binary string : 0000000000001111
*/