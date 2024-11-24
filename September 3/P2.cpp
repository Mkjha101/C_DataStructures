// Memory Allocation

#include <iostream>
#include <cstdlib> // For malloc, calloc, free
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of elements. Exiting program." << endl;
        return 1;
    }

    // Using malloc
    int *ptr1 = (int *)malloc(n * sizeof(int));
    if (!ptr1) {
        cout << "Memory allocation failed using malloc." << endl;
        return 1;
    }
    cout << "Memory allocated using malloc at address: " << ptr1 << endl;

    // Using calloc
    int *ptr2 = (int *)calloc(n, sizeof(int));
    if (!ptr2) {
        cout << "Memory allocation failed using calloc." << endl;
        free(ptr1);
        return 1;
    }
    cout << "Memory allocated using calloc at address: " << ptr2 << endl;

    // Using new
    int *ptr3 = new (nothrow) int[n];
    if (!ptr3) {
        cout << "Memory allocation failed using new." << endl;
        free(ptr1);
        free(ptr2);
        return 1;
    }
    cout << "Memory allocated using new at address: " << ptr3 << endl;

    // Freeing memory
    free(ptr1);
    free(ptr2);
    delete[] ptr3;

    cout << "Memory deallocated successfully." << endl;

    return 0;
}

