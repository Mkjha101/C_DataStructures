#include <iostream>
#include <queue>
using namespace std;

// Define the structure of a Node
struct Node {
    int data;
    Node* next;
    Node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};

// Function to insert a new node at the end of the linked list
Node* insertAtEnd(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        return newNode;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Function to traverse and print the linked list
void traverseList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to get the maximum value in the linked list
int getMaxValue(Node* head) {
    int maxValue = head->data;
    Node* current = head;
    while (current != nullptr) {
        if (current->data > maxValue) {
            maxValue = current->data;
        }
        current = current->next;
    }
    return maxValue;
}

// Function to extract a specific digit of a number based on digit place
int getDigit(int number, int place) {
    return (number / place) % 10;
}

// Function to perform counting sort for a specific digit place
Node* countingSort(Node* head, int place) {
    // Create 10 buckets using queues for digits 0-9
    queue<Node*> buckets[10];

    // Distribute nodes into appropriate buckets based on the current digit
    Node* current = head;
    while (current != nullptr) {
        int digit = getDigit(current->data, place);
        buckets[digit].push(current);
        current = current->next;
    }

    // Collect nodes from buckets and reconstruct the list
    Node* newHead = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < 10; ++i) {
        while (!buckets[i].empty()) {
            Node* temp = buckets[i].front();
            buckets[i].pop();
            temp->next = nullptr; // Disconnect the node
            if (newHead == nullptr) {
                newHead = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = tail->next;
            }
        }
    }
    return newHead;
}

// Radix Sort function to sort the linked list
Node* radixSort(Node* head) {
    // Find the maximum value in the list to determine the number of digit places
    int maxValue = getMaxValue(head);

    // Perform counting sort for each digit place (units, tens, hundreds, etc.)
    for (int place = 1; maxValue / place > 0; place *= 10) {
        head = countingSort(head, place);
    }
    return head;
}

// Main function
int main() {
    // Initialize the linked list
    Node* head = nullptr;
    head = insertAtEnd(head, 170);
    head = insertAtEnd(head, 45);
    head = insertAtEnd(head, 75);
    head = insertAtEnd(head, 90);
    head = insertAtEnd(head, 802);
    head = insertAtEnd(head, 24);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 66);

    // Display the unsorted linked list
    cout << "Unsorted List: ";
    traverseList(head);

    // Perform Radix Sort
    head = radixSort(head);

    // Display the sorted linked list
    cout << "Sorted List: ";
    traverseList(head);

    return 0;
}

