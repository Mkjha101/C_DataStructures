#include <iostream>
#include <algorithm>
using namespace std;

void partition(int arr[], int n) {
    int p = arr[0];  // Choose the first element as pivot
    int i = 0;
    int j = n - 1;   // Set the 'j' to the last index
    
    while (i < j) {
        // Increment 'i' until we find an element larger than pivot
        do {
            i++;
        } while (i < n && arr[i] < p);

        // Decrement 'j' until we find an element smaller than pivot
        do {
            j--;
        } while (j >= 0 && arr[j] > p);

        // Swap if we find elements out of order
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    
    // Swap the pivot into the correct place
    swap(arr[0], arr[j]);
}

int main() {
    int arr[6] = {5, 8, 2, 4, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the partition function
    partition(arr, n);

    cout << "Array after partitioning around the pivot:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

