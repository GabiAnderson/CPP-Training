/*

    We can simplify some of our code by utilizing pre and postfix incrementation and decrementation
    Prefix - before the variable name
    Postfix - after the variable name
    Increment - double plus (++) increments by 1
    Decrement - double subtract (--) decrements by 1

    Whether we use pre or post fix will determine when the value is incremented/decremented

*/

#include <iostream>

int main()
{
    int val = 5;
    // the value will be print as is (5) then increment
    std::cout << "The value is incrementing: " << val++ << std::endl;
    // the value now holds the new incremented value
    std::cout << "The value has incremented: " << val << std::endl;
    // the value will be incremented and then printed
    std::cout << "The value has incremented again: " << ++val << std::endl;
    
    return 0;
}