/*

    The set of rules that determine the order of evaluations (which order the operators are performed)
        a + b * c - d / e - f + g

    In C++:
        * and / have to be done for + or -

    Precedence: which operation to do first
    Associativity: which direction or which order (all + from left to right or right to left)

    We can explicitly state which operations we want to do first by using ()
        things inside of ()s will be done first regardless of what operator is used
        a * ( b + c) - standard order of ops wants to compute the * first but the () will be done first in this case

*/

#include <iostream>

int main()
{
    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    int result = a + b * c - d / e - f + g; 
    // complete * and / first, then do + and - from left to right until done
    // b * c = 24
    // d / e = 3
    // a + 24 = 30
    // 30 - e = 27
    // 27 - f = 25
    // 25 + g = 30
    std::cout << "result : " << result << std::endl;

    result = a / b * c + d - e + f;
    // complete * and / first from left to right, then + and - from left to right
    // a / b = 2
    // 2 * c = 16
    // 16 + d = 25
    // 25 - e = 22
    // 22 + f = 24
    std::cout << "result : " << result << std::endl;

    // this is the exact equation as the first but with () to ensure the a + b gets done first
    result = (a + b) * c - d / e - f + g; // 72 - 3 - 2 + 5
    std::cout << "result: " << result << std::endl;

    return 0;
}