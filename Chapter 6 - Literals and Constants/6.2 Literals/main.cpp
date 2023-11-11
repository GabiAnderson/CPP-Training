/*

    Literal constants are just values - things that are hardcoded in the code

    There are multiple types of literal constants
        Quoted constants
            characters - 'c'
            strings - "string"
            wchar_t - unicode constant
            char16_t - unicode constant
            char32_t - unicode constant
        Number constants
            int - 5 
            unsigned int - 5u
            unsigned long - 5ul
            unsigned long long - 5ull
            float - 5.0f
            double - 5.0
            long double - 5.0l

    Generally, constants and literals are used interchangably
        const int = 5; is a constant expression with the 5 being called a constant int literal

    There are 5 main types of literals in c++
        int
        float
        character
        string
        boolean

    Int literals are used to represent and store integer values only
    There are 2 ways to express int literals
        1. Prefix
            a. Decimal - 57, 78
            b. Octal - 057, 078
            c. Hex - 0x57, 0x78
        2. Suffix
            a. int - no suffix
            b. unsigned int - u or U
            c. long int - l or L
            d. unsigned long int - ul or UL
            e. long long int - ll or LL
            f. unsigned long long int - ull or ULL

    Floating point literals are used to represent and store real numbers (integer part, real part, fractional part, and exponential part)
    They can be stored in decimal or exponential form
        Decimal
            Must include a decimal point, exponent part, or both otherwise there will be an error
        Exponential
            Must include the int part, fractional part, or both otherwise there will be an error
        
        Valid Floating Literals
            10.125
            1.215-10L
            10.5E-3
        Invalid Floating Literals
            125E
            1250f
            0.e879

    Character literals refer to the literal used to store a single character within a single quote
    There are 2 ways to represent characters
        char - used to store normal character literal
            char chr = 'F';
        wchar_t - used to store a wide-character literal
            wchar_t = L'F';

    String literals are similar to characters but can store multiple characters
        It can also accomodate special characters and escape sequences
        string val[] = "mystring"

    Boolean literals are used to store 1 for true or 0 for false 

*/

#include <iostream>
#include <string>

int main()
{
    // these variables are assigned literal constants (hardcoded values)
    int a = 5;
    int b = 11;
    char c = 'c';
    char d = 'j';
    return 0;
}