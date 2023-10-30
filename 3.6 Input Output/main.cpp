/*

    Iostrem has variations that act as/allow input and output
        std::cout - data goes from our program to the console
        std::cerr - prints errors to the console
        std::clog - prints log messages to the console
        std::cin - reads data from the console to the program

*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Standard Print" << std::endl;

    std::cerr << "Error" << std::endl;

    std::clog << "Log" << std::endl;

    // this type allows you to store strings in CPP - we will learn more about this later
    std::string name;
    int age;

    std::cout << "Please enter your name: " << std::endl;
    // notice the flipped >>'s
    std::cin >> name;

    std::cout << "Please enter our age: " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age << " years old." << std::endl;

    std::cout << "Please type in your name and age, seperated by spaces: " << std::endl;
    std::cin >> name >> age;
    /*
        ChatGPT helped with an error I was having - the std::getline was not working, here is the explanation as to why
        std::cin.ignore(); is required in this full instance
            It seems like your code has an issue related to the use of std::cin >> age; just 
            before the std::getline(std::cin, full_name); statement.

            When you use std::cin >> age; to read an integer, it reads the integer but leaves the newline character in the 
            input buffer. When you subsequently call std::getline(std::cin, full_name);, it encounters the newline character 
            left by the previous std::cin >> age; and assumes that the user has entered an empty line. That's why it doesn't 
            wait for user input and moves ahead without stopping.
    */
    std::cin.ignore();

    std::cout << "Hello " << name << "! You are " << age << " years old." << std::endl; 

    std::string full_name;
    std::cout << "Please type in your first and last name: " << std::endl;
    // this is how you deal with input with spaces
    std::getline(std::cin,full_name);
    std::cout << "Hello " << name << "! You are " << age << " years old." << std::endl; 

    return 0;
}