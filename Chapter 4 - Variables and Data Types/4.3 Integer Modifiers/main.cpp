/*

    Modifiers are things placed within our declarations/initializations that modify our ints
        signed
            allows for + and - numbers to be stored
            still occupies 4 bytes - can store range 0 to ((2^n) - 1) where n is bits
                0 to 4,294,967,295
        unsigned
            allows for + numbers to be stored, if a - is attempted we get a compiler error
            still occupies 4 bytes - can store range (-2^(n - 1)) to ((2^(n-1)) - 1) where n is bits
                -2,147,483,648 to 2,147,483,647
        short
            shorts only take up 2 bytes
        long
            longs are ATLEAST 4 bytes
        long long
            long longs are ATLEAST 8 bytes

    Modifiers can be used before the int keyword but int is also implicitly added if exlcuded. So you can include or not include int
        signed int <=> signed
        long int <=> long

*/

#include <iostream>

int main()
{
    // signed vs unsigned
    signed value1 {-10};
    /*
        unsigned variables given a - (or signed) value results in an error

        C:\Users\gabi8\OneDrive\Documents\GitHub\CPP-Training\4.3 Integer Modifiers\main.cpp:29:22: error: narrowing conversion of '-10' from 'int' to 'unsigned int' [-Wnarrowing]
            29 |     unsigned value2 {-10};
                |                      ^~~

            Build finished with error(s).
    */
    //unsigned value2 {-10};
    std::cout << "Signed: " << value1 << std::endl;
    //std::cout << "Unsigned: " << value2 << std::endl;
    std::cout << "---------------------" << std::endl;

    // all take up 2 bytes
    short short_var {-32768};
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};
    std::cout << "Short variable : " << short_var<<  " , size : " << sizeof (short) << " bytes" << std::endl;
    std::cout << "Short Int : " << short_int << " , size : " << sizeof (short int) << " bytes" << std::endl;
    std::cout << "Signed short : " << signed_short << " , size : " << sizeof (signed short) << " bytes" << std::endl;
    std::cout << "Signed short int :  " << signed_short_int <<  " , size : " << sizeof (signed short int) << " bytes" << std::endl;
    std::cout << "unsigned short int :  " << unsigned_short_int <<  " , size : " << sizeof (unsigned short int) << " bytes" << std::endl;
    std::cout << "---------------------" << std::endl;

    // all take up 4 bytes
    int int_var {55};
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int{77};
    std::cout << "Int variable :  " << int_var <<" , size : " << sizeof (int) << " bytes" << std::endl;
    std::cout << "Signed variable " << signed_var <<" , size : " << sizeof (signed) << " bytes" << std::endl;
    std::cout << "Signed int :  " << signed_int <<" , size : " << sizeof (signed int) << " bytes" << std::endl;
    std::cout << "unsigned int :  " << unsigned_int <<" , size : " << sizeof (unsigned int) << " bytes" << std::endl;
    std::cout << "---------------------" << std::endl;

    // all take up 4 OR 8 bytes - I think 4 OR 8 because it depends on operating system (Linux is 8, Windows is 4)
    long long_var {88};
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};
    std::cout << "Long variable :  " << long_var << " , size : " << sizeof (long) << " bytes" <<std::endl;
    std::cout << "Long int :  " << long_int <<" , size : " << sizeof (long int) << " bytes" << std::endl;
    std::cout << "Signed long :  " << signed_long <<" , size : " << sizeof (signed long) << " bytes" << std::endl;
    std::cout << "Signed long int : " << signed_long_int <<" , size : " << sizeof (signed long int) << " bytes" << std::endl;
    std::cout << "unsigned long int : " << unsigned_long_int <<" , size : " << sizeof (unsigned long int) << " bytes" << std::endl;
    std::cout << "---------------------" << std::endl;

    // all take up 8 bytes
    long long long_long {888};
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};
    std::cout << "Long long : " << long_long <<" , size : " << sizeof (long long) << " bytes" << std::endl;
    std::cout << "Long long int : " << long_long_int <<" , size : " << sizeof (long long int) << " bytes" << std::endl;
    std::cout << "Signed long long : " << signed_long_long <<" , size : " << sizeof (signed long long) << " bytes" <<std::endl; 
    std::cout << "Signed long long int : " << signed_long_long_int <<" , size : " << sizeof (signed long long int) << " bytes" << std::endl;  
    std::cout << "unsigned long long int : " << unsigned_long_long_int <<" , size : " << sizeof (unsigned long long int) << " bytes" << std::endl;  
    std::cout << "---------------------" << std::endl;

    return 0;
}
