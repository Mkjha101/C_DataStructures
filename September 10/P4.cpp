#include <iostream>
using namespace std;

// Doubly Linked List Node Definition
struct Node {
    int data;
    Node *next;
    Node *prev;
    Node(int d) : data(d), next(nullptr), prev(nullptr) {}
};

// Function to traverse forward
void traverseForward(Node *head) {
    while (head != nullptr) {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}

// Function to traverse backward
void traverseBackward(Node *tail) {
    while (tail != nullptr) {
        cout << tail->data << "  ";
        tail = tail->prev;
    }
    cout << endl;
}

// Function to find the length of the list
int getLength(Node *head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}

// Insert at the beginning
Node* insertAtBeginning(Node *head, int data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    return newNode;
}

// Insert at the end
Node* insertAtEnd(Node *head, int data) {
    Node *newNode = new Node(data);
    if (head == nullptr) return newNode;

    Node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

// Insert at a specific position
Node* insertAtPosition(Node *head, int pos, int data) {
    if (pos < 1) {
        cout << "Invalid Position!" << endl;
        return head;
    }

    Node *newNode = new Node(data);
    if (pos == 1) {
        newNode->next = head;
        if (head != nullptr) head->prev = newNode;
        return newNode;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; ++i) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds!" << endl;
        delete newNode;
        return head;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != nullptr) temp->next->prev = newNode;
    temp->next = newNode;

    return head;
}

// Delete from the beginning
Node* deleteFromBeginning(Node *head) {
    if (head == nullptr) return nullptr;
    Node *temp = head;
    head = head->next;
    if (head != nullptr) head->prev = nullptr;
    delete temp;
    return head;
}

// Delete from the end
Node* deleteFromEnd(Node *head) {
    if (head == nullptr) return nullptr;

    Node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    if (temp->prev != nullptr) {
        temp->prev->next = nullptr;
    } else {
        head = nullptr; // List becomes empty
    }

    delete temp;
    return head;
}

// Delete from a specific position
Node* deleteFromPosition(Node *head, int pos) {
    if (pos < 1 || head == nullptr) {
        cout << "Invalid Position!" << endl;
        return head;
    }

    if (pos == 1) {
        Node *temp = head;
        head = head->next;
        if (head != nullptr) head->prev = nullptr;
        delete temp;
        return head;
    }

    Node *temp = head;
    for (int i = 1; i < pos && temp != nullptr; ++i) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds!" << endl;
        return head;
    }

    if (temp->prev != nullptr) temp->prev->next = temp->next;
    if (temp->next != nullptr) temp->next->prev = temp->prev;

    delete temp;
    return head;
}

// Main Function
int main() {
    // Initializing the list with three nodes
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;

    // Insertions
    first = insertAtBeginning(first, 40); // Insert at beginning
    traverseForward(first);

    first = insertAtEnd(first, 50); // Insert at end
    traverseForward(first);

    first = insertAtPosition(first, 3, 60); // Insert at position
    traverseForward(first);

    // Length
    cout << "Length of the doubly linked list: " << getLength(first) << endl;

    // Traversals
    traverseForward(first);
    traverseBackward(third);

    // Deletions
    first = deleteFromBeginning(first); // Delete from beginning
    traverseForward(first);

    first = deleteFromEnd(first); // Delete from end
    traverseForward(first);

    first = deleteFromPosition(first, 2); // Delete from position
    traverseForward(first);

    return 0;
}