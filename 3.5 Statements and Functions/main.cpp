/*
    STATEMENTS
    A statement is a basic unit of computation in a C++ program
    Every C++ program is a compliation of statements organized in a certain way to acheive some goal
    Statements end with ; in C++
    Statements are executed in order from top to bottom
    Execution continues until there is a statement causing the program to terminate, or run another set of statements

    FUNCTIONS
    A function is like a machine, you give it input and it provides an expected output
    CPP has a special syntax to define functions
        returnType functionName (paramterType paramterName,...,)
        {
            function body;
            return val; val must match returnType
        }
    Functions need to be defined before they can be used
*/

#include <iostream>

// This is a function - defined before it is used and matching the syntax
int addNumbers (int first_number, int second_number)
{
    int sum = first_number + second_number;
    return sum;
}

int main()
{
    int firstNumber = 12; // this is a statement
    int secondNumber = 9;

    int sum = firstNumber + secondNumber;

    // this is an example of using (calling) the predefined function from above
    sum = addNumbers(firstNumber, secondNumber); // this is a function call - also a statement

    sum = addNumbers(3, 4); // this is another statement - and another function call

    return 0; // this is also a statement
}