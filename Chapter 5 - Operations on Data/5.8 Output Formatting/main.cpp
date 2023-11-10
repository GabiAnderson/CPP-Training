/*

    Cout has the ability to format output to make it more readable
        There are additionaal libraries (ios and iomanip) that help with this
        Look into ios and iomanip for all the additional std::_____'s they add
        There is documentation on these, just search input/output manipulators

    std::endl
        We have been using this so far but we can not use if we want
        It adds a "\n" to the end of our cout so the next cout is on the next line
            std::endl <==> "\n" (at least for now, they do the same thing)
                There are differences but in terms of looks they result in the same thing


    std::flush
        Causes immediate sending of data to the device connected to the stream
        Basically it empties the output buffer to the terminal or output window
            Data is sent to the terminal when the buffer is full but we can add the flush statement to force it to the terminal

    std::setw()
        This sets the width for the next print statement
        This is good for when we are putting out tables as it ensures each column can be the same width

    Justification
        std::right
        std::left
        std::internal - this is special for variables

        Must be used with std::setw - sets the justification of the text within the cell

    std::setfill
        This allows us to set a character that fills the empty space within are std::setw() cells

    std::boolalpha
        Forces booleans to print as true/false instead of 1/0

    std::noboolalpha
        Forces booleans to print as 1/0 instead of true/false - or disables std::boolalpha

    std::showpos
        Forces positive numbers to include a + similar to negative number's -

    std::noshowpos
        Forces positive numbers to exclude a + similar to negative number's - - or disables std::showpos

    std::dec, std::oct, std::hex
        Forces numbers to print in the desired number system (different bases)

    std::showbase
        Forces numbers to print the base if used with std::dec, std::oct, std::hex
            Base meaning 0x for hex, leading 0 for oct, etc

    std::uppercase
        Forces data (hex) to become all caps

    std::nouppercase
        Forces data (hex) to be as defined - or reverts std::uppercase

    std::scientific - std::fixed
        Forces floating points format
        Default is scientific when necessary but fixed otherwise
            Reminder scientific is with the E (1.34E-10)

    std::setprecision()
        Sets precision (# of digits) printed
        Default is 6

    std::showpoint
        Forces decimal point to display even if zeros follow decimal

    std::noshowpoint
        Forces decimal points to be excluded if 0s trail - or disables std::showpoint
*/

#include <iostream>
#include <ios>
#include <iomanip>

int main()
{
    // std::endl : places a new line character on the output stream.
    //       This is identical to placing '\n' on the output stream.
    std::cout << "STD::ENDL" << std::endl << std::endl;
    std::cout << "Statement 1 (no endl)";
    std::cout << "Statement 2";

    std::cout << std::endl;
    std::cout << "-------------" << std::endl;

    std::cout << "Statement 1 (with endl)" << std::endl;
    std::cout << "Statement 2" << std::endl;

    std::cout << "-------------" << std::endl;

    std::cout << "Statement 1 (with backslash n)\n";
    std::cout << "Statement 2\n";
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::flush : flushes the output buffer to its final destination.
    std::cout << "STD::FLUSH" << std::endl << std::endl;
    std::cout << "This is a nice message...." << std::endl << std::flush;
    // Here we don't really see a difference but under the hood the use of flush forces the output directly to the terminal
        // instead of going into the buffer
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::setw() : Adjusts the field with for the item about to be printed. Requires #include <iomanip>
    // The setw() manipulator only affects the next value to be printed.
    std::cout << "STD::SETW()" << std::endl << std::endl;
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;
    std::cout << std::endl;

    std::cout << "Formatted table : " << std::endl;
    // it is usually better practice to use setw() with a variable instead of hardcoded but here it is hardcoded to better understand
        // use of variable is next
    std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;
    std::cout << std::endl;

    std::cout << "Formatted table with variables: " << std::endl;
    int col_width{14};
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // Justify : Values can be justified in their fields. There are three manipulators
    //           for adjusting the justification: left, right, and internal.
    std::cout << "STD::RIGHT w/ STD::SETW()" << std::endl << std::endl;
    // std::right - right justified
    std::cout << "Right justified table(default) :  " << std::endl;
    col_width = 20;
    std::cout << std::right;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::left - Left justified
    std::cout << "STD::LEFT w/ STD::SETW()" << std::endl << std::endl;
    std::cout << "Left justified table :  " << std::endl;
    col_width = 20;
    std::cout << std::left;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::internal - Internal justified : sign is left justified , data is right justified
    std::cout << "STD::INTERNAL w/ STD::SETW()" << std::endl << std::endl;
    std::cout << "Right vs Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::setfill() : sets a fill character for empty spaces
    std::cout << "STD::SETFILL() w/ STD::SETW()" << std::endl << std::endl;
    std::cout << "Table with fill characters :  " << std::endl;
    col_width = 20;
    std::cout << std::left;
    std::cout << std::setfill('*'); // The fill character
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::boolalpha and std::noboolapha : control bool output format : 1/0 or true/false
    std::cout << "STD::BOOLALPHA and STD::NOBOOLALPHA" << std::endl << std::endl;
    bool condition{true};
    bool other_condition{false};
    std::cout << "Default" << std::endl;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl << std::endl;

    std::cout << "std::boolalpha" <<  std::endl;
    std::cout << std::boolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl << std::endl;

    std::cout << "std::noboolalpha" << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::showpos and std::noshowpos : show or hide the +  sign for positive numbers
    std::cout << "STD::SHOWPOS and STD::NOSHOWPOS" << std::endl << std::endl;
    int pos_num{34};
    int neg_num{-45};

    std::cout << "Default" << std::endl;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl << std::endl;

    std::cout << "std::showpos" << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl << std::endl;

    std::cout << "std::noshowpos" << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // different number systems : std::dec, std::hex, std::oct
    std::cout << "STD::DEC, STD::OCT, STD::HEX" << std::endl << std::endl;
    int pos_int{717171};
    int neg_int{-47347};
    double double_var{498.32};

    std::cout << "Default" << std::endl;
    std::cout << "default base format : " << std::endl;
    std::cout << "pos_int : " << pos_int << std::endl;
    std::cout << "neg_int : " << neg_int << std::endl;
    std::cout << "double_var : " << double_var << std::endl << std::endl;

    std::cout << "Set Bases" << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;
    std::cout << "double_var in different bases : " << std::endl;
    std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
    std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::uppercase and std::nouppercase
    std::cout << "STD::UPPERCASE and STD::NOUPPERCASE" << std::endl << std::endl;
    pos_int = 717171;
    char ch {'a'};

    std::cout << "pos_int (nouppercase : default) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    std::cout << "char val : " << ch << std::endl << std::endl;
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    std::cout << "char val : " << ch << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::fixed and std::scientific : for floating point values
    std::cout << "STD::SCIENTIFIC and STD::FIXED" << std::endl << std::endl;
    double a{3.1415926535897932384626433832795};
    double b{2006.0};
    double c{1.34e-10};
    std::cout << "double values (default : use scientific where necessary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl << std::endl;
    std::cout << "double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl << std::endl;
    std::cout << "double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl << std::endl;
    std::cout << "double values (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack to reset to default
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::setprecision() : the number of digits printed out for a floating point. Default is 6
    std::cout << "STD::SETPRECISION()" << std::endl << std::endl;
    a = 3.1415926535897932384626433832795;
    std::cout << "a (default precision(6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;
    // If the precision is bigger than supported by the type, you'll just print garbage.
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::showpoint and std::noshowpoint : show trailing zeros if necessary
    // Force output of the decimal point
    std::cout << "STD::SHOWPOINT and STD::NOSHOWPOINT" << std::endl << std::endl;
    double d{34.1};
    double e{101.99};
    double f{12.0};
    int g{45};
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12
    std::cout << "g : " << g << std::endl << std::endl;
    std::cout << "showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12.0
    std::cout << "g : " << g << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    return 0;
}