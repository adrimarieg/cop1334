/******************************************************************
 *  Program Name  : NumberGuessingGame
 *  Author        : Adrianne Gonzalez
 *  Course        : COP1334 - Introduction to C++ Programming
 *  Instructor    : John P. Masseria
 *  Date          : March 15, 2025
 *  
 *  Description   :
 *      The program generates a random number, then asks the user to guess the number. Each attempted guess is tallied and shared
 *      once the user guesses the correct number. The user is also allowed to start the game over if they wish to try again.  
 * 
 *    
 *  Algorithm     :
 *      To generate a random number, I first declared a random device, then declared the limits of a integer distribution system to
 *      connect to the random device. Together, they are able to generate a truly random number. 
 *
 *    
 *  Revision History:
 *      - March 10 - Initial program development - Only determined the structure of the program (Decided on a nested if/else loop within a while loop)
 *      - March 15 - Created a random number generator, added restart ability, added some aesthetic code.
 *  
 ******************************************************************/

/* iostream for cin/cout statements
random for the random number generator */
#include <iostream>
#include <random>

using namespace std;

int main() {

    /* Variables randomNum and userGuess don't have assigned values because one will be randomly 
    generated and the other will be assigned by the user.
    Variable numOfAttempts counts the guesses from the user. It is defined as 0 to start the game */
    int randomNum;
    int userGuess;
    int numOfAttempts = 0;

    /* Random number generator created and its value has been assigned to start the game with a unique number ever time. */
    random_device myEngine;
    uniform_int_distribution<int> randomInt (0,100);
    randomNum = randomInt(myEngine);
 
    /* Initial game instruction is shared with user. */
    cout << "Guess the random number between 1 and 100: " << endl;

    /* This while loop covers all actions if the userGuess is not equal to the randomly generated number. 
    The loop starts with a cin statement which allows the user to store a new value with each iteration. 
    Each incorrect guess increments the numOfAttempts counter.
    
    The if/else loop is nested within the while loop to handle the two cases of a guess that is too high and 
    a guess that is too low. 
    
    If the userGuess is equal to the randomNum, the while loop will not run and the program will continue. */
    while (userGuess != randomNum) {
        cin >> userGuess;

        if (userGuess > randomNum) {
            cout << "Your guess is too high. Try again." << endl;
            numOfAttempts++;
        } else if (userGuess < randomNum) {
            cout << "Your guess is too low. Try again." << endl;
            numOfAttempts++;
        } 
    } 

    /* Once the while loop is exited by not meeting the expression (userGuess != randomNum), the user is 
    notified that they guessed the correct statement. 
    
    The final count numOfAttempts is shared. 
    
    The program ends.*/
    cout << "Congratulations, you won! " << userGuess << " is the correct number!" << endl;
    cout << "You guessed a total of " << numOfAttempts << " times." << endl << endl;  // I added an additional endl on line 71 for aesthetic purposes in the terminal

    cout << "Would you like to play again? Y/N" << endl;
    /* declaring a variable to allow the user to select if they want to restart the game of exit. */
    char restart;
    cin >> restart;

    /* A while loop that allows the user to elect to restart of not. The input can be capital case or lower case.*/
    if (restart == 'Y' || restart == 'y') {
        cout << endl; // I added an additional endl for aesthetic purposes in the terminal
        main(); // To restart the game, I told the program to run the main method of the file.
    } else {
        cout << endl; // I added an additional endl for aesthetic purposes in the terminal
        cout << "Thank you for playing!" << endl << endl; // I added an additional endl for aesthetic purposes in the terminal
    }
}

