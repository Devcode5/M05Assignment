//  diceGame.cpp
//  CSP360
//  Created by Aqila Nasiry on 3/4/25.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice() { //This function is for rolling 2 dice and having their sum
    return (rand() % 6 + 1) + (rand() % 6 + 1); // Dice rolls sum
}

int main() {
    srand(static_cast<unsigned int>(time(0))); //seed random number
    //srand(time(0));

    int firstPlayer , secondPlayer;
    firstPlayer = 0;
    secondPlayer = 0;

    char playSecondTime; // Variable to ask the user if they want to play again

    do {
        int firstPlayerScore = 0; // Points for player 1 in a single game
        int secondPlayerScore = 0; // Points for player 2 in a single game

        for (int turn = 1; turn <= 11; ++turn) {//we want the game to continue for 11 turns
            int total = rollDice();

            // Program requirement is that if the total is even then player 1 will get a point otherwise player 2 gets a point
            if (total % 2 == 0) {
                firstPlayerScore++;
            } else {
                secondPlayerScore++;
            }

            // Optionally display the result of the turn (can be commented out if not needed)
            cout << "Turn " << turn << ": Dice total = " << total << endl;
        }

        // Display points after 11 turns
        cout << "Player 1 total points: " << firstPlayerScore << endl;
        cout << "Player 2 total points: " << secondPlayerScore << endl;

        // who is the winner
        if (firstPlayerScore > secondPlayerScore) {
            cout << "Player 1 congratulations" << endl;
            firstPlayer++;
        } else if (secondPlayer > firstPlayerScore) {
            cout << "Player 2 congratulations" << endl;
            secondPlayer++;
        }

        //Second part of the assignment: we ask the user if they want to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> playSecondTime;

    } while (playSecondTime == 'y' || playSecondTime == 'Y');


    cout << "\nAll rounds total wins:" << endl;
        cout << "Player 1: " << firstPlayer << " wins" << endl;
        cout << "Player 2: " << secondPlayer << " wins" << endl;

    return 0;
}


