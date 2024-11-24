#include <iostream>
using namespace std;

// Function to solve Tower of Hanoi
void TOH(int n, char source, char auxiliary, char target) {
    if (n == 0) return; // Base case: no disks to move
    
    // Recursive case: Move n-1 disks from source to auxiliary
    TOH(n - 1, source, target, auxiliary);
    
    // Move the nth disk from source to target
    cout << "Moving disk " << n << " from " << source << " to " << target << endl;
    
    // Move the n-1 disks from auxiliary to target
    TOH(n - 1, auxiliary, source, target);
}

int main() {
    int n;
    cout << "Enter the number of n" << endl;
    cin >> n;
    
    // Solve Tower of Hanoi for n disks from A to C using B as auxiliary
    TOH(n, 'A', 'B', 'C');
    return 0;
}

