/*

    Boolean is a type that stores 2 states - True (1) or False (0)
        bool result {true}
        bool result2 {false}

    Booleans are used a lot for "decisions"

    std::boolalpha forces the output to take on the true/false format instead of the 1/0 format

*/

#include <iostream>

int main()
{
    bool red_light {true};
    bool green_light{false};

    if(red_light == true)
    {
       std::cout << "Red Light True" << std::endl; 
    }
    else
    {
        std::cout << "Red Light False" << std::endl;
    }

    // can check without explicitly stating which state (true/false) we want
    if(green_light)
    {
        std::cout << "Green Light True" << std::endl;
    }
    else
    {
        std::cout << "Green Light False" << std::endl;
    }

    std::cout << "Red Light State: " << red_light << std::endl;
    std::cout << "Green Light State: " << green_light << std::endl;

    // change format
    std::cout << std::boolalpha;
    std::cout << "Red Light State: " << red_light << std::endl;
    std::cout << "Green Light State: " << green_light << std::endl;

    std::cout << "Size of bool: " << sizeof(bool) << std::endl;
    
    return 0;
}