/*

    Integers are represented by int - they typically occupy 4 bytes in memory
        A variable is a named peice of memory that you use to store data

    You can declare and initialize variables in any of the following formats
        int count = 0;
            This format is called assignment initialization
        int count{0};
            This format is called braced initialization - in general this is what should be used
        int count(0);
            This format is called functional variable initialization, it will perform implicit conversion
                so int count(2.9); would implicitly be converted to 2 bc it chops off the data. It
                also happens silently so it is preferable to use the {} format to get the warning/error

    You can request the sizeof an int using sizeof() function
        Can use either int the type or an int variable
            sizeof(int);
            sizeof(variableName);

*/

#include <iostream>

int main()
{
    // declare only - variable may contain a garbage value so it is best to declare an initialize together if possible
    int elephant_count;

    // initializes variable to 0 in declaration
    int lion_count{}; // braced
    int lio_count(0); // functional
    int li_count = 0; // assignment

    // initializes variable to 10
    int dog_count{10}; // braced 
    int do_count(10); // functional
    int d_count = 10; // assignment

    // initalizes variable to 15
    int cat_count{15};

    // can use expressions/variables as initializers
    int domesticated_animal { dog_count + cat_count };

    // this won't compile because the variables within the expression are undeclared
    //int bad_initialization { doesnt_exist + doesnt_exit2 };

    // 2.9 is of type double (not int), so you will get a warning or compiler error based on usage
        /*
            In this case, I was unable to build the program because of the error

            C:\Users\gabi8\OneDrive\Documents\GitHub\CPP-Training\4.2 Integers\main.cpp:50:32: error: narrowing conversion of '2.8999999999999999e+0' from 'double' to 'int' [-Wnarrowing]
                50 |     int narrowing_conversation{2.9};
                    |                                ^~~

                Build finished with error(s).
        */
    //int narrowing_conversion{2.9};
    int narrowing_conversio(2.9);
    int narrowing_conversi = 2.9;
    //std::cout << "Braced: " << narrowing_conversion << std::endl;
    std::cout << "Functional: " << narrowing_conversio << std::endl;
    std::cout << "Assignment: " << narrowing_conversi << std::endl;

    // use sizeof() function to get the size (in byte memory) of a variable/data type
    int size = sizeof(int);
    int siz = sizeof(dog_count);

    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of int variable: " << sizeof(dog_count) << std::endl;

    return 0;
}