// include is a feature of cpp to load prebuilt libraries
#include <iostream> //   iostream is a library that helps print things to the console - std::cout

// this is the main function
//    a function is a block of code that does many things
//    the main function is the entry point/start point of any cpp file - it is the very first thing ran
int main()
{
    std::cout << "Hello World!" << std::endl; // endl creates a new line (\n) at the end of this print

    // this a way for the main function to send a message to the operating system that the main function finished
    //   successfully or failed - it is kind of like a common practice but not required
    return 0;
}