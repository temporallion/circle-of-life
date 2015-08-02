/*These are my notes on ADDRESSING and VARIABLES*/

#include "stdafx.h"
#include <iostream>
#include "math.h"

//Memory is organized into sequential units called ADDRESSES
//The smallest addressable unit of memory is the BYTE (group of 8 bits)
//DATA TYPE tells use how to interpret the bytes in a meaningful way (boolean, character, floating point, integer, void)


/*VARAIBLES*/
//DEFINING a variable
    int nValue;

//INITIALIZATION is when a variable is given a value
    int nValue1 = 1;        //explicit initialization
    int nValue2(2);         //implicit initialization

//ASSIGNMENT is when a variable is initialized after it has been defined
    int valueAssignment()
    {
        int nValue3;
        nValue3 = 3;

        return 3;
    }

//Multiple variables of the same type can be defined in a single statement
    int nValue4, nValue5;
//Multiple variables of the same type can also be defined in a single statement
    int nValue6 = 6, nValue7 = 7;
//Implicit initialization is best in these cases, as it is more clear. Bonus: Implicit can also perform better in some cases
    int implicitStyle()
    {
        int nValue8(16), nValue9(18);

        return 17;
    }
//RULE: Use implicit initialization instead of explicit initialization

//RULE: The proper C++ style is to define variables as close to the first use of that variable as possible
    //Variables defined only when needed are given context by statements around them and requires less scrolling!

//VOID the "no type" data type
    //Used to indicate that a function does not return a value
    void writeValue(int nValue8)
    {
        std::cout << "The value of nValue8 is: " << nValue8 << std::endl;
    }
    //Used to indicate that a function does not take any parameters
    int nValue9(void)
    {
        return 0;
    }
    //You cannot declare a variable of type void!


/*VARIABLE SIZES*/


//A variable with n bits can hold 2^n possible values
    long double calculateBits(int x)
    {
        //Calculates the number of bits in user entered number of bytes and returns that value
        long double byteValue = powl(2, x);
        return byteValue;
    }

    int byteInquiry()
    {
        using namespace std;
        //We ask the user for the number of bytes the user has
        cout << "Because a BYTE is 8 bits, a BYTE can store 256 possible values!" << endl << endl;
            int userBytes(0);
        cout << "How many BYTES do you have? Please enter a value: ";
            cin >> userBytes;
            cout << "You entered " << userBytes << " bytes!" << endl << endl;
            cout << "That means..." << endl << endl;
            cout << "..." << endl << endl;
            cout << "There are " << calculateBits(userBytes) << " bits in " << userBytes << " bytes!" << endl << endl;

            return 0;
    }

    //This program was copypasta'd from the site to check the size of data types, then modded
    int variableSizes()
    {
        using namespace std;
        cout << "bool:\t\t" << sizeof(bool) << " bytes\t\t" << calculateBits(sizeof(bool)) << " bits" << endl;
        cout << "char:\t\t" << sizeof(char) << " bytes\t\t" << calculateBits(sizeof(char)) << " bits" << endl;
        cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\t\t" << calculateBits(sizeof(wchar_t)) << " bits" << endl;
        cout << "char16_t:\t" << sizeof(char16_t) << " bytes\t\t" << calculateBits(sizeof(char16_t)) << " bits" << endl; // C++11, may not be supported by your compiler
        cout << "char32_t:\t" << sizeof(char32_t) << " bytes\t\t" << calculateBits(sizeof(char32_t)) << " bits" << endl; // C++11, may not be supported by your compiler
        cout << "short:\t\t" << sizeof(short) << " bytes\t\t" << calculateBits(sizeof(short)) << " bits" << endl;
        cout << "int:\t\t" << sizeof(int) << " bytes\t\t" << calculateBits(sizeof(int)) << " bits" << endl;
        cout << "long:\t\t" << sizeof(long) << " bytes\t\t" << calculateBits(sizeof(long)) << " bits" << endl;
        cout << "long long:\t" << sizeof(long long) << " bytes\t\t" << calculateBits(sizeof(long long)) << " bits" << endl; // C++11, may not be supported by your compiler
        cout << "float:\t\t" << sizeof(float) << " bytes\t\t" << calculateBits(sizeof(float)) << " bits" << endl;
        cout << "double:\t\t" << sizeof(double) << " bytes\t\t" << calculateBits(sizeof(double)) << " bits" << endl;
        cout << "long double:\t" << sizeof(long double) << " bytes\t\t" << calculateBits(sizeof(long double)) << " bits" << endl;
        cout << endl;

        return 0;
        //Interestingly, the "sizeof" operator is one of three operators in C++ that is a word instead of a symbol
            //The other two are "new" and "delete"
        //The "sizeof" operator can also be used on a variable name!!!
        //C++ only guarantees that integers will have a certain minimum size, not a specific size
    }

    int integerSizes()
    {
        using namespace std;
        cout << endl;
        cout << "char:\t\t" << sizeof(char) << " bytes\t\t" << calculateBits(sizeof(char)) << " bits" << endl;
        cout << "short:\t\t" << sizeof(short) << " bytes\t\t" << calculateBits(sizeof(short)) << " bits" << endl;
        cout << "int:\t\t" << sizeof(int) << " bytes\t\t" << calculateBits(sizeof(int)) << " bits" << endl; // Typically 4 bytes on modern architectures
        cout << "char:\t\t" << sizeof(char) << " bytes\t\t" << calculateBits(sizeof(char)) << " bits" << endl;
        cout << "long:\t\t" << sizeof(long) << " bytes\t\t" << calculateBits(sizeof(long)) << " bits" << endl;
        cout << "long long:\t" << sizeof(long long) << " bytes\t\t" << calculateBits(sizeof(long long)) << " bits" << endl; // C++11, may not be supported by your compiler
        cout << endl;

        //A signed integer can hold both negative and positive numbers
        //The range of a 1 byte signed integer has a range of -128 to 127
        signed long l(0);
        //An unsigned integer can only hold positive numbers (if we know we are not going to need negative numbers)
        //The range of a 1 byte unsigned integer has a range of 0 to 255
        unsigned long m(0);

        return 0;


    }

    int rangeInquiry();
    int rangeInquiryResponseEngine()
    {
        using namespace std;
        cout << endl;
        cout << "Would you like to know bit range of varying bytes?" << endl;
        cout << "   YES:   Enter the number 1" << endl;
        cout << "   NO:    Enter the number 0" << endl;
        int x(0);
        cin >> x;
        return x;
    }

    int rangeInquiryEvaluationEngine(int x)
    {
        using namespace std;
        if (x == 1)
        {
            cout << "1 byte signed:\t\t" << "-128 to 127" << endl;
            cout << "1 byte unsigned:\t\t" << "0 to 255" << endl;
            cout << "2 byte signed:\t\t" << "-32,768 to 32,767" << endl;
            cout << "2 byte unsigned:\t\t" << "0 to 65,535" << endl;
            cout << "4 byte signed:\t\t" << "-2,147,483,648 to 2,147,483,647" << endl;
            cout << "4 byte unsigned:\t\t" << "0 to 4,294,967,295" << endl;
            cout << "8 byte signed:\t\t" << "-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807" << endl;
            cout << "8 byte unsigned:\t\t" << "0 to 18,446,744,073,709,551,615" << endl;
            cout << endl;
        }
        else if (x == 0)
        {
            cout << "Very well..." << endl;
        }
        else if (x > 1)
        {
            cout << "Don't be an asshole!" << endl;
            rangeInquiry();
        }
            return 0;
    }

    int rangeInquiry()
    {
        using namespace std;
        int x = rangeInquiryResponseEngine();
        rangeInquiryEvaluationEngine(x);
        return 0;
    }

    int main()
    {
        variableSizes();
        byteInquiry();
        rangeInquiry();
    }