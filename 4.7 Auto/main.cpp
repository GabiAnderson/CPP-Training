/*

    Auto is a keyword that lets the compiler deduce the type for us
        This is nice for data types that are very very long

*/

#include <iostream>
#include <typeinfo>

int main()
{
    auto var1 {12}; // int
    auto var2 {13.0}; // double
    auto var3 {14.0f}; // float
    auto var4 {15.0l}; // long double
    auto var5 {'a'}; // char
    auto var6 {123u}; // unsigned
    auto var7 {123ul}; // unsigned long
    auto var8 {123ll}; // long long

    // hovering over the names in the sizeof() shows the compiler has already deduced the correct types
    std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << " & is of type : " << typeid(var1).name() << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << " & is of type : " << typeid(var2).name() << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << " & is of type : " << typeid(var3).name() << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << " & is of type : " << typeid(var4).name() << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << " & is of type : " << typeid(var5).name() << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << " & is of type : " << typeid(var6).name() << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << " & is of type : " << typeid(var7).name() << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << " & is of type : " << typeid(var8).name() << std::endl;

    /*
    
        typeid results
            i: Typically represents an integer type (e.g., int)
            d: Represents a double-precision floating-point type (e.g., double)
            f: Represents a single-precision floating-point type (e.g., float)
            e: Indicates a 'long double' floating-point type (platform-dependent size)
            c: Typically used for a character type (e.g., char)
            j: This is not standard and may be a compiler-specific encoding for a specific type, not universally recognized across compilers or systems
            m: Similar to j, it's likely a compiler-specific encoding for a particular type
            x: This doesn’t correspond to any standard type and might be a compiler-specific representation for a type that is not universally recognized across compilers

    */

    return 0;
}