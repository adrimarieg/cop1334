#include <iostream>
#include <random>

using namespace std;

//placed these two new variable in the "global scope" area.
//created highScore to store/update the high score every time the game is played.
int highScore;
//needed this variable to track the number of times the game was played.
int totalPlayCount = 1;

int main() {

    int randomNum;
    int userGuess;
    int numOfAttempts = 0;

    random_device myEngine;
    uniform_int_distribution<int> randomInt (0,100);
    randomNum = randomInt(myEngine);
 
    cout << "Guess the random number between 1 and 100: " << endl;

    while (userGuess != randomNum) {
        cin >> userGuess;
        numOfAttempts++;

        //If user input is out of accepted range, the attempt does not count towards num of attempts.
        if (userGuess < 1 || userGuess > 100) {
            cout << "This attempt does not count. Please enter a number between 1 and 100 inclusively." << endl;
            numOfAttempts--;
        } else if (userGuess > randomNum) {
            cout << "Your guess is too high. Try again." << endl;
        } else if (userGuess < randomNum) {
            cout << "Your guess is too low. Try again." << endl;
        } else if (userGuess == randomNum) {    
            cout << endl << userGuess << " is the correct number!" << endl;
            cout << "You guessed a total of " << numOfAttempts << " times. ";
        } else {
            cout << "Please enter a valid number." << endl;
        }
    } 

    // the first time the game is played will always be the initial high score value.
    if (totalPlayCount == 1) {
        cout << "That's a new high score!" << endl;
        highScore = numOfAttempts;
    //if high score is beat, highScore updates.
    } else if (numOfAttempts < highScore) {
        cout << "That's a new high score!" << endl;
        highScore = numOfAttempts;      
    // added to update user with current high score if they dont beat it.
    } else if (numOfAttempts > highScore) {
        cout << "The current high score is: " << highScore << endl;
    } else if (numOfAttempts == highScore) {
        cout << "You almost beat the high score!" << endl;
    }

    cout << "Would you like to play again? Y/N" << endl;
    char restart;
    cin >> restart;

    //if user wants to play again, the total play count will increment before the recursion call.
    if (restart == 'Y' || restart == 'y') {
        totalPlayCount++;
        main();
    } else {
        cout << "Thank you for playing!" << endl << endl; 
    }

}
