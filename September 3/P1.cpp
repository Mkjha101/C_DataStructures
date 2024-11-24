/*
as we know that we can't increase the size of the array 
until we use vector. but using vector is not optimising 
whereas firstly linked list is a dynamic data structure 
where no memory location happens , grow/shrink run time 
secondly insertion and deletion in linked list is easy.

There is no need of continuous memory allocation, 
and it will work upon run time.

Types of linked list 
1. singly ll 2. doubly ll 3. circular ll 4. circular doubly ll
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data_new) { // Constructor for Node
        data = data_new;
        next = nullptr;
    }
};

void print(Node* head) {
    Node* current = head; // Use a separate pointer to traverse the list
    while (current != nullptr) {
        cout << current->data << " "; // Print the data of the current node
        current = current->next;     // Move to the next node
    }
    cout << endl; // Print a newline for better readability
}

int main() {
    // Creating nodes and linking them
    Node* head = new Node(30);
    head->next = new Node(40);
    head->next->next = new Node(50);
    head->next->next->next = new Node(60);

    // Printing the linked list
    printf("Linked List is:\t");
    print(head);

    return 0;
}

