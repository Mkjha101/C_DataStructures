#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};

// Traversing the linked list
void traversing(Node* head) {
    Node* node1 = head;
    while (node1 != nullptr) {
        cout << node1->data << "  ";
        node1 = node1->next;
    }
    cout << endl;
}

// Searching an element in the linked list
bool searching(Node* head, int target) {
    Node* node1 = head;
    while (node1 != nullptr) {
        if (node1->data == target) {
            return true;
        }
        node1 = node1->next;
    }
    return false;
}

// Finding the length of the linked list
int length(Node* head) {
    Node* node1 = head;
    int l = 0;
    while (node1 != nullptr) {
        l++;
        node1 = node1->next;
    }
    return l;
}

// Insertion at the beginning
Node* insertionAtBegin(Node* head, int d) {
    Node* node1 = new Node(d);
    node1->next = head;
    return node1;
}

// Insertion at the end
Node* insertionAtLast(Node* head, int d) {
    Node* newNode = new Node(d);
    if (head == nullptr) {
        return newNode;
    }
    Node* node1 = head;
    while (node1->next != nullptr) {
        node1 = node1->next;
    }
    node1->next = newNode;
    return head;
}

// Insertion at a specific position
Node* insertionAtPosition(Node* head, int pos, int data) {
    if (pos < 1) {
        cout << "Invalid Position" << endl;
        return head;
    }

    Node* newNode = new Node(data);
    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bound" << endl;
        delete newNode;
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Deletion from the beginning
Node* deletingfromBegin(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Deletion from the end
Node* deletingfromEnd(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    Node* node1 = head;
    while (node1->next->next != nullptr) {
        node1 = node1->next;
    }
    delete node1->next;
    node1->next = nullptr;
    return head;
}

// Deletion from a specific position
Node* deletingfromPosition(Node* head, int pos) {
    if (pos < 1) {
        cout << "Invalid Position" << endl;
        return head;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of bound" << endl;
        return head;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;

    return head;
}

int main() {
    // Adding initial nodes to the linked list
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Traversing the linked list
    traversing(head);

    // Searching for an element
    if (searching(head, 40)) {
        cout << "Element is present" << endl;
    } else {
        cout << "Element is absent" << endl;
    }

    // Finding the length of the linked list
    cout << "Length of the linked list = " << length(head) << endl;

    // Insertion at the beginning
    head = insertionAtBegin(head, 40);
    traversing(head);
    head = insertionAtBegin(head, 50);
    traversing(head);

    // Insertion at the end
    head = insertionAtLast(head, 60);
    traversing(head);

    // Insertion at a specific position
    head = insertionAtPosition(head, 4, 70);
    traversing(head);

    // Deletion from the beginning
    head = deletingfromBegin(head);
    traversing(head);

    // Deletion from the end
    head = deletingfromEnd(head);
    traversing(head);

    // Deletion from a specific position
    head = deletingfromPosition(head, 4);
    traversing(head);

    return 0;
}
