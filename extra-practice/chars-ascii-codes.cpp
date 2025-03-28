/*
CHARACTERS FOR THE ASCII CODES

Write a program that uses a loop to display the characters for thre ASCII codes 
0 through 127. Display 16 characters on each line.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int asciiCode;
    int charPerLine = 16;

    for(int i = 0; i <= 127; i++) {
        char charVal = static_cast<char>(i);
        asciiCode = i;

        cout << setw(3) << i << ": " ;
        cout << setw(2) << charVal;

        if ((i+1) % charPerLine == 0) {
            cout << endl;
        } 
    }
}