/*
SUM OF NUMBERS

Write a program that asks the user for a positive integer value. The program should use a loop to get the sum of 
all the integers from 1 up to the nuber entered. For example, if the user enters 50, the loop will find the sum 
of 1,2,3,4,...50.

Input Validation: Do not accept a negative starting number. 
*/

#include <iostream>
//#include <limits>

using namespace std;

int main () {

    char playAgain;
    
    do {
        int input;
        int sum = 0;
        
        cout << "Please enter a positive integer: ";
        cin >> input;

        //ADD CHECK FOR DATA TYPE
        if (input <= 0) {
            cout << "You entered an invalid number." << endl;
        } else {
            for (int i = 0; i <= input; i++) {
                sum += i;
            }

            cout << "The total sum of numbers leading up to your input value is: " << sum << endl;
        }

        cout << "Would you like to enter another number? Y/N: " ;
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');
    
    return 0;
}