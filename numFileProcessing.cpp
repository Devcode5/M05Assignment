//
//numFileProcessing.cpp
// CSP360
// Created by Aqila Nasiry on 3/4/25.
#include <iostream>
#include <fstream>
#include <vector>
//#include <unistd.h>
using namespace std;
int main() {
    // char cwd[1024];
    // if (getcwd(cwd, sizeof(cwd)) != NULL) {
    // cout << "Current working directory: " << cwd << endl;
    // } else {
    // perror("getcwd() error");
    // return 1;
    // }
    //ifstream inputFile("Random.txt"); // Open the file in the current directory
    ifstream inFile;
    inFile.open("Random.txt");
    //
    if (!inFile) {
        cout << "Error: Could not open the file." << endl;
        return 1; // Return 1 if the file cannot be opened
    }
    double number;
    int count = 0;
    double sum = 0.0;
    // Read the numbers from the file
    while (inFile >> number) {
        count++; // it will increment the count for each number
        sum += number; // then adding the number to the sum
    }
    if (count == 0) {
        cout << "No numbers found in the file." << endl;
        return 1;
    }
    // Calculate the average
    double average = sum / count;
    // Display the results
    cout << "Total numbers: " << count << endl;
    cout << "Sum of numbers: " << sum << endl;
    cout << "Average of numbers: " << average << endl;
    inFile.close(); // Close the file
    return 0;
}
