/*Jose Ayestas 
ENGR 1410
lAB 12
07/04/2026*/
//Program: 2D Array Column Sum Calculator
//This program allows the user to input integers into a 5x6 2D array,
//displays the array, and calculates the total of each column.

#include <iostream>
#include <iomanip>
using namespace std;

// Function: fillArray
// Purpose: Prompts the user to fill a 2D array with integers
// Parameters:
//   arr - the 2D array with 6 columns
//   rows - number of rows in the array
void fillArray(int arr[][6], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Enter value for row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
}

// Function: printArray
// Purpose: Prints the contents of a 2D array row by row
// Parameters:
//   arr - the 2D array with 6 columns
//   rows - number of rows in the array
void printArray(int arr[][6], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 6; j++) {
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }
}

// Function: printTotals
// Purpose: Calculates and prints the total of each column
// Parameters:
//   arr - the 2D array with 6 columns
//   rows - number of rows in the array
void printTotals(int arr[][6], int rows) {
    for (int j = 0; j < 6; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << setw(5) << colSum;
    }
    cout << endl;
}

// Driver of the program
int main() {
    const int ROWS = 5;
    const int COLS = 6;
    int data[ROWS][COLS];

    // Greeting 
    cout << "This program will let you enter integers into a 5x6 array, \n";
    cout << "then it will display the array and calculate the total for each column.\n\n";

    // Fill the array
    fillArray(data, ROWS);

    cout << "\nArray contents:\n";
    // Print the array
    printArray(data, ROWS);

    cout << "-------------------------------\n";
    // Print totals of each column
    printTotals(data, ROWS);

    return 0;
}