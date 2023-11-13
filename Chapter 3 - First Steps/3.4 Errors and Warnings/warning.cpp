/*
    There are 3 types of errors/warnings

        Compile Time Errors
        Runtime Errors
        Warnings - do not prevent the compiliation but just give a little insight into where you may be doing something bad

*/

#include <iostream>

int main()
{
    // dividing by 0 can result in problems - IDE shows warnings with yellow underlines and the compiler provides warnings when building
        /*
                warning: division by zero [-Wdiv-by-zero]
            14 |     std::cout << 20/0 << std::endl;
                |                  ~~^~

            Build finished with warning(s).
        */
    std::cout << 20/0 << std::endl;
    return 0;
}

/*

    OUTPUT RESULTS:
        __no output but compile errors__

*/