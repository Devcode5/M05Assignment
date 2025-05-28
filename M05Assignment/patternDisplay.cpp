//  patternDisplay.cpp
//  CSP360
//  Created by Aqila Nasiry on 3/4/25.


#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask the user for the number of rows and validate the input
    do {
        cout << "How many rows of pattern you would like to display (1 to 20): ";
        cin >> rows;

        if (rows < 1 || rows > 20) {
            cout << "The input that you entered is invalid. Enter a number between 1 and 20." << endl;
        }
    } while (rows < 1 || rows > 20);

    //nested loops
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing
        for (int j = 1; j <= i; ++j) {
            if (j == i) {
                cout << "#";  //this will print at the end // Print # at the end of each row
            } else {
                cout << "*";  // this will play for every position
            }
        }
        cout << endl;
    }

    return 0;
}


