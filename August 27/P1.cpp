#include <iostream>
using namespace std;

// Function to display elements
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << "  ";
    cout << endl;
}

// Function to sort the array
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    display(arr, size);
}

// Function for binary search
int search(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

// Function to insert an element
void insert(int arr[], int &size, int value, int index) {
    if (index < 0 || index > size) {
        cout << "Invalid index!\n";
        return;
    }
    for (int i = size; i > index; i--)
        arr[i] = arr[i - 1];
    arr[index] = value;
    size++;
    sortArray(arr, size);
}

// Function to delete an element
void deleteValue(int arr[], int &size, int value) {
    int index = search(arr, size, value);
    if (index == -1) {
        cout << "Value not found!\n";
        return;
    }
    for (int i = index; i < size - 1; i++)
        arr[i] = arr[i + 1];
    size--;
    sortArray(arr, size);
}

// Function to update an element
void update(int arr[], int size, int position, int newElement) {
    if (position < 0 || position >= size) {
        cout << "Invalid position!\n";
        return;
    }
    arr[position] = newElement;
    sortArray(arr, size);
}

// Function to clear the array
void clearArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] = 0;
    display(arr, size);
}

int main() {
    int rows, cols;
    cout << "Enter the size of rows and columns: ";
    cin >> rows >> cols;
    int totalSize = rows * cols;
    int arr[totalSize];

    cout << "Enter the elements: \n";
    for (int i = 0; i < totalSize; i++)
        cin >> arr[i];

    cout << "Initial array:\n";
    display(arr, totalSize);

    int choice;
    char cont;
    do {
        cout << "\nMenu:\n";
        cout << "1. Search\n2. Insert\n3. Delete\n4. Clear\n5. Sort\n6. Display\n7. Update\n8. Exit\nChoose an operation: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int key;
            cout << "Enter the key to search: ";
            cin >> key;
            int result = search(arr, totalSize, key);
            if (result != -1)
                cout << "Key found at index " << result << endl;
            else
                cout << "Key not found!\n";
            break;
        }
        case 2: {
            int value, index;
            cout << "Enter value to insert and its index: ";
            cin >> value >> index;
            insert(arr, totalSize, value, index);
            break;
        }
        case 3: {
            int value;
            cout << "Enter value to delete: ";
            cin >> value;
            deleteValue(arr, totalSize, value);
            break;
        }
        case 4:
            cout << "Clearing array:\n";
            clearArray(arr, totalSize);
            break;
        case 5:
            cout << "Sorted array:\n";
            sortArray(arr, totalSize);
            break;
        case 6:
            cout << "Displaying array:\n";
            display(arr, totalSize);
            break;
        case 7: {
            int position, newElement;
            cout << "Enter position and new element: ";
            cin >> position >> newElement;
            update(arr, totalSize, position, newElement);
            break;
        }
        case 8:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

        if (choice != 8) {
            cout << "Do you want to continue? (y/n): ";
            cin >> cont;
        }

    } while (choice != 8 && (cont == 'y' || cont == 'Y'));

    return 0;
}

