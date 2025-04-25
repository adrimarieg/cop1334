/******************************************************************
 *  Program Name  : DNA Sequence Matching
 *  Author        : Adrianne Gonzalez
 *  Course        : COP1334 - Introduction to C++ Programming
 *  Instructor    : John Masseria
 *  Date          : April 25, 2025
 *  
 *  Description   :
 *  This program reads two files separate files, one containing known DNA sequences of different animals and the 
 *  second file contains various unknown DNA sequences. The values in each file will be stored in parallel arrays. 
 *  Using search algorithms, all unkown DNA sequences will be matched with known sequences using substring. 
 *  
 *  Technical Requirements
 *      - Use two parallel 2D arrays to store names and sequences.
 *      - Read the known sequences using ifstream and the >> operator.
 *      - Read the unknown sequences using getline().
 *      - Compare each unknown sequence with every known sequence.
 *      - Output clear and professional messages.
 *      - Write clean code with comments and good variable names.
 *      - Include our standard comment header at the beginning of your program.
 *    
 *  Revision History:
 *  - 4/22/25 : Psuedocode was written.
 *  - 4/24/25 : Completed reading both files and created vectors to hold all data.
 *  - 4/25/25 : Completed remaining nested parallel loop to compare vector value and find matching sequences.
 *  
 ******************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main() {

    /**** Open and read known sequences file  ****/
    ifstream inputFile;
    inputFile.open("E:/Code/repos/cop1334/known_sequences.txt");

    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    vector<string> names;       // Vector to hold all known sequences names
    vector<string> sequences;   // Vector to hold all known sequences 

    string name;                // Variable to represent a name 
    string sequence;            // Vector to represent a sequence 

    int totalKnown = 0;              // Variable to count the number of known sequences

    while (inputFile >> name >> sequence) {     //loop to add individual names/sequencesfrom file to vectors
        names.push_back(name);
        sequences.push_back(sequence);
        totalKnown++;
    }

    inputFile.close();

    cout << "Known DNA sequences have been read successfully!" << endl;

    /**** Open and read unknown sequences file  ****/
    inputFile.open("E:/Code/repos/cop1334/unknown_sequences.txt");

    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }
 
    string unknownSequence;
    vector<string> unknownDNA;

    //loop to add individual lines/sequences to vector.
    int totalUnknown = 0;

    while (getline(inputFile, unknownSequence)) {
        unknownDNA.push_back(unknownSequence);
        totalUnknown++;
    }

    inputFile.close();

    cout << "Unknown DNA sequences have been read successfully!" << endl;

    /**** Searching for matches ****/
    cout << "Finding matching sequences..." << endl;

    for (int u = 0; u <= totalUnknown - 1; u++) {                   // Looping through unknown sequences
        bool found = false;

        for (int k = 0; k <= totalKnown - 1; k++) {                 // Inner loop to compare outer loop subscript value to known sequence

            if (unknownDNA[u] == sequences[k].substr(0, unknownDNA[u].length())) {     // Using substr() to find a unknown sequence as a substring of known sequences
                cout << "Unknown sequence '" << unknownDNA[u] << "' found in " << names[k] << endl;
                found = true;       // Change found so following if statement wont run
                break;              // Stop checking once match was found
            }
        }

        if (!found) {               // If match not found, display 'NOT FOUND' statement
            cout << "Unknown sequence '" << unknownDNA[u] << "' NOT FOUND in any known sequence." << endl;
        }
    }
}