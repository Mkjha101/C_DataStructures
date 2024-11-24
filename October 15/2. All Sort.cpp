#include<iostream>
#include<string>
#include<algorithm>
#define vi vector<int>
using namespace std;

// Heapify function for heap sort
void heapify(int a[], int n, int i)
{
    int maxIdx = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && a[l] > a[maxIdx]) {
        maxIdx = l;
    }
    if (r < n && a[r] > a[maxIdx]) {
        maxIdx = r;
    }
    if (maxIdx != i) {
        swap(a[i], a[maxIdx]);
        heapify(a, n, maxIdx);
    }
}

// Heap sort function
void heapsort(int a[], int n)
{
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    // One by one extract elements from heap
    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]); // Move current root to end
        heapify(a, i, 0);  // Call heapify on the reduced heap
    }
}

// Insertion Sort function
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort function
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Bubble Sort function
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Quick Sort function
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1); // Index of smaller element
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {7, 5, 9, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print original array
    cout << "Original array: ";
    printArray(arr, n);

    // Heap Sort
    int arr1[] = {7, 5, 9, 1, 8};
    cout << "Heap Sort: ";
    heapsort(arr1, n);
    printArray(arr1, n);

    // Insertion Sort
    int arr2[] = {7, 5, 9, 1, 8};
    cout << "Insertion Sort: ";
    insertionSort(arr2, n);
    printArray(arr2, n);

    // Selection Sort
    int arr3[] = {7, 5, 9, 1, 8};
    cout << "Selection Sort: ";
    selectionSort(arr3, n);
    printArray(arr3, n);

    // Bubble Sort
    int arr4[] = {7, 5, 9, 1, 8};
    cout << "Bubble Sort: ";
    bubbleSort(arr4, n);
    printArray(arr4, n);

    // Quick Sort
    int arr5[] = {7, 5, 9, 1, 8};
    cout << "Quick Sort: ";
    quickSort(arr5, 0, n - 1);
    printArray(arr5, n);

    return 0;
}

