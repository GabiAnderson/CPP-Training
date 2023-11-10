/*

    Logical operators work on boolean operands
        AND && - if any operands are false the result is false
            F && F = F
            F && T = F
            T && T = F
            T && T = T
        OR || (inclusive) - if any operands are true the result is true
            F || F = F
            F || T = T
            T || F = T
            T || T = T
        NOT !
            !T = F
            !F = T

    We can use booleans with logical operators or we can use the results of rational operations
        Booleans
            bool a = false;
            bool b = true;
            bool res = a && b;
        
        Rational Operations
            bool a = (10 == 5)
            bool b = (5 < 9)
            bool res = a && b

    We can combine relational and logical operators to create expressions

*/

#include <iostream>

int main()
{
    bool a{true};
    bool b{false};
    bool c{true};

    std::cout << std::boolalpha; // true / false
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    // AND : Evaluates to true when all operands are true.
    //       A single false operand will cause the entire expression to evaluate to false

    std::cout << std::endl;
    std::cout << "Basic AND operations" << std::endl;

    std::cout << " a && b : " << (a && b) << std::endl;          // false
    std::cout << " a && c : " << (a && c) << std::endl;          // true
    std::cout << " a && b && c :" << (a && b && c) << std::endl; // false

    // OR : Evaluates to true when at least one operand true.
    //       A single true operand will cause the entire expression to evaluate to true
    std::cout << std::endl;
    std::cout << "Basic OR operations" << std::endl;
    std::cout << " a || b : " << (a || b) << std::endl;
    std::cout << " a || c : " << (a || c) << std::endl;
    std::cout << " a || b || c :" << (a || b || c) << std::endl;

    // NOT : Negates whateve operand you put it with
    std::cout << std::endl;
    std::cout << "Basic NOT operations" << std::endl;

    std::cout << "!a : " << !a << std::endl;
    std::cout << "!b : " << !b << std::endl;
    std::cout << "!c : " << !c << std::endl;

    // Combinations of all these operators
    std::cout << std::endl;
    std::cout << "Combining logical operators" << std::endl;
    // !(a && b) || c
    std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl; // true

    // Combining logical operators with relational operators
    int d{45};
    int e{20};
    int f{11};

    std::cout << std::endl;
    std::cout << "Relational and logic operations on integers" << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;

    std::cout << std::endl;

    std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl; // true
    std::cout << "(d == e) || (e <= f ) : " << ((d == e) || (e <= f)) << std::endl;
    std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
    std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
    std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
    std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
    std::cout << "(! a) && (d == e) : " << ((!a) && (d == e)) << std::endl;
    std::cout << "(! a) && (d == e) : " << ((!a) && (d == e)) << std::endl;
}