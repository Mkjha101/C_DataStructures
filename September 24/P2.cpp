#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};

node* insertionInEmpty(node* last, int value) {
    if (last != nullptr) return nullptr;

    node* node1 = new node(value);
    node1->next = node1;
    return node1;
}

node* insertionAtBeginning(node* last, int value) {
    if (last == nullptr) return insertionInEmpty(last, value);

    node* node1 = new node(value);
    node1->next = last->next;
    last->next = node1;
    return last;
}

node* insertionAtEnd(node* last, int value) {
    if (last == nullptr) return insertionInEmpty(last, value);

    node* node1 = new node(value);
    node1->next = last->next;
    last->next = node1;
    return node1;  // Update last to the newly inserted node
}

node* insertion_AT_Specific(node* tail, int pos, int value) {
    if (pos < 1) {
        cout << "Invalid Position" << endl;
        return tail;
    }

    if (tail == nullptr) {
        if (pos == 1) return insertionInEmpty(tail, value);
        cout << "Invalid Position" << endl;
        return tail;
    }

    node* node1 = new node(value);
    if (pos == 1) {
        node1->next = tail->next;
        tail->next = node1;
        return tail;
    }

    int i = 1;
    node* curr = tail->next;
    while (i < pos - 1 && curr != tail) {
        curr = curr->next;
        i++;
    }

    if (i != pos - 1) {
        cout << "Invalid Position" << endl;
        delete node1;
        return tail;
    }

    node1->next = curr->next;
    curr->next = node1;

    if (curr == tail) tail = node1;
    return tail;
}

void traversing(node* tail) {
    if (tail == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }

    node* temp = tail->next;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << endl;
}

int main() {
    node* tail = nullptr;

    // Creating an empty circular linked list and performing operations
    tail = insertionInEmpty(tail, 10);
    traversing(tail);

    tail = insertionAtBeginning(tail, 40);
    traversing(tail);

    tail = insertionAtEnd(tail, 50);
    traversing(tail);

    tail = insertion_AT_Specific(tail, 3, 60);
    traversing(tail);

    tail = insertion_AT_Specific(tail, 1, 70);
    traversing(tail);

    return 0;
}

