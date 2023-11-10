/*

    Char is the data type used to store text characters
        char character {'a'};
        char occupies 1 byte (8 bits)

    ASCII Table
        We can match each value in 0-255 (values that can be repped with char's 8 bits) with a different character - ASCII table
        We can then choose to interpret them as numbers or chars

    ASCII Alternatives
        ASCII was among the first encodings to represent text in a computer
        It falls short when it comes to representing languages other than english and things like emojis
        Unicode is a far better way to represent text (will not be learning more but it is a robust way to represent text in different languages)
*/

#include <iostream>

int main()
{
    // Char
    char character1 {'a'};
    char character2 {'b'};
    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;

    // ASCII Table
    char value = 65; // ASCII character code for 'A'
    // we can use static_cast<type>(variableName) to tell the compiler to treat the variable as the state data type
    std::cout << "Value: " << value << " Value (int): " << static_cast<int>(value) << std::endl; 
    std::cout << "Value: " << character1 << " Value (int): " << static_cast<int>(character1) << std::endl;
    return 0;
}