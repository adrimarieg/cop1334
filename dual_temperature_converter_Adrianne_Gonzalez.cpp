/******************************************************************
 *  Program Name  : Dual Temperature Converter
 *  Author        : Adrianne Gonzalez
 *  Course        : COP1334 - Introduction to C++ Programming
 *  Instructor    : John Masseria
 *  Date          : Feb. 23, 2025
 *  
 *  Description   :
 *  This program take a user's input values of celsius and fahrenheit, then returns a conversion for each.
 *  
 *  Input         :
 *  - celsius
 *  - fahrenheit
 *  
 *  Output        :
 *  - conversion of celsius input
 *  - conversion of fahrenheit input
 *  
 *  Algorithm     :
 *  1. celsius = (fahrenheit - 32.0) * 5/9)
 *  2. fahrenheit = (celsius * 9/5) + 32.0)
 *    
 *  Revision History:
 *  - 2/7/25 - ["initial program development"]
 *  
 ******************************************************************/

//inlcuded iostream for cout and cin statements
//included iomanip for setprecision and fixed methods
 #include <iostream>
 #include <iomanip>
 
 using namespace std;
 
 int main()
 {
    //Declare undefined variables
    double fahrenheit, celsius;

    //ask user to assign values to each variable
    cout << "Enter a temperature in Celsius: ";
    cin >> celsius;
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
    //set styling requirements for cout statements (two decimal places)
    cout << setprecision(2) << fixed;
    //cout the converted values as a string. 
    cout << celsius << "°C is equal to " << ((celsius * 9/5) + 32.0) << "°F." << endl;
    cout << fahrenheit << "°F is equal to " << ((fahrenheit - 32.0) * 5/9) << "°C." << endl;
 }
 
