/*

    Focusing on limits library
        std::numeric_limits<T>::min()
        std::numeric_limits<T>::max()
        std::numeric_limits<T>::lowest()

        These functions return the min/max/lowest number that can be represented using type T
        There are more functions in the limits library such as is_signed and digits
            Learn more: https://en.cppreference.com/w/cpp/types/numeric_limits


    For floating points
        Min - 1.17549e-38 - the smallest positive number
        Max - 3.40282e+38 - the largest number
        Lowest - -3.40282e+38 - the smallest negative number

    Signed Int
        Min - -32768 - the smallest negative number
        Max - 32767 - the largest number
        Lowest - means nothing

    Unsigned Int (short)
        Min - 0 - the smallest number
        Max - 65535 - the largest number
        Lowest - nothing

    Min VS Lowest
        min: 
            It represents the smallest finite value representable by a numeric type. 
            For unsigned types, min will be 0. For signed types, it represents the 
            most negative (i.e., smallest) representable value for that type. For example, 
            for an int, std::numeric_limits<int>::min() is usually -2147483648.

        lowest: 
            This attribute is specifically available for floating-point types. It 
            represents the most negative (i.e., the minimum) finite value that the 
            type can represent. It is typically the negative equivalent of max().

*/

#include <limits>
#include <iostream>

int main()
{
    std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to "
              << std::numeric_limits<short>::max() << std::endl;

    std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to "
              << std::numeric_limits<unsigned short>::max() << std::endl;

    std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to "
              << std::numeric_limits<int>::max() << std::endl;

    std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to "
              << std::numeric_limits<unsigned int>::max() << std::endl;

    std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to "
              << std::numeric_limits<long>::max() << std::endl;

    std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to "
              << std::numeric_limits<float>::max() << std::endl;

    std::cout << "The range(with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to "
              << std::numeric_limits<float>::max() << std::endl;

    std::cout << "The range(with lowest) for double is from " << std::numeric_limits<double>::lowest() << " to "
              << std::numeric_limits<double>::max() << std::endl;

    std::cout << "The range(with lowest) for long double is from " << std::numeric_limits<long double>::lowest() << " to "
              << std::numeric_limits<long double>::max() << std::endl;

    // Other functions in limit library
    std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl; // identifies signed types
    std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl; // # of digits that can be used to represent

    return 0;
}