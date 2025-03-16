/****** March 25, 2025 ******/


/****** March 11, 2025 ******/
//midterm exam

/****** March 11, 2025 ******/

/* MAIN FUNCTION 
    If main function data type is a string, you wouldn't end with: 
        return 0; 
    but rather: 
        string return_value = "1";
        return stoi(return_value); // end of program - return to Operating System */

// OUTPUT OF HEXIDECIMAL VALUES AND BACKSLASHES
#include <string>
#include <iostream>

using namespace std;

int main() {
    string myString = "abc\\xyz"; 
    cout << "Length of myString = " << myString.length() << endl; // outputs: 7 because the double backslash counts as 1

    string myString2 = "abc\x65";
    cout << "Length of myString2 = " << myString2.length() << endl; // outputs 4, because "\x65" counts as 1 because that is the hexidecimal for "e"

    string myString3 = "abcd\x65";
    cout << "myString3 \= " << myString3 << ", myString3.length = " << myString3.length() << endl;
    //notice the backslash in the opening string is ignored.

};

//RANDOM NUMBER GENERATION | HEADER
#include <random>
random_device myEngine;
uniform_int_distribution<int> randomInt (0,100);
int number = randomInt(myEngine);


/***** March 4, 2025 *****/

// INCREMENT AND DECREMENT
    int val = 0;

    val++; // reads value then adds 1
    ++val; // adds 1 then reads value
    val--;
    --val;

// SHORTHANDS
    y += x; // same as y = x + y
    y %= x; // same as y = x % y
    y *= val-- // same as y = y * val--
