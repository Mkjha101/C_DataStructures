#include <iostream>
using namespace std;

// Function for Row-Major Address Calculation
void calculateRowMajor(int row, int col, int n) {
    int baseAddress = 100; // Starting address of the array
    int elementSize = 4;   // Size of each element (in bytes)
    int address = baseAddress + elementSize * ((row * n) + col);

    cout << "Row-Major Order:\n";
    cout << "Base Address: " << baseAddress << "\n";
    cout << "Address of Element: " << address << "\n";
}

// Function for Column-Major Address Calculation
void calculateColumnMajor(int row, int col, int m) {
    int baseAddress = 100; // Starting address of the array
    int elementSize = 4;   // Size of each element (in bytes)
    int address = baseAddress + elementSize * ((col * m) + row);

    cout << "Column-Major Order:\n";
    cout << "Base Address: " << baseAddress << "\n";
    cout << "Address of Element: " << address << "\n";
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int array[rows][cols];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    int row, col, choice;
    cout << "Enter the row index: ";
    cin >> row;
    cout << "Enter the column index: ";
    cin >> col;

    if (row >= rows || col >= cols || row < 0 || col < 0) {
        cout << "Invalid indices!\n";
        return 0;
    }

    cout << "Enter 1 for Row-Major order\n";
    cout << "Enter 2 for Column-Major order\n";
    cin >> choice;

    switch (choice) {
    case 1:
        calculateRowMajor(row, col, cols);
        break;
    case 2:
        calculateColumnMajor(row, col, rows);
        break;
    default:
        cout << "Invalid choice!\n";
    }

    return 0;
}

