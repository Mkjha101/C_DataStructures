// Here we are learning to perform some operations 
// in the format of a single linked list.
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = nullptr;
    }
};

// Function to traverse and print the linked list
void traverse(node *head)
{
    node *current = head;
    while (current != nullptr)
    {
        cout << current->data << "  ";
        current = current->next;
    }
    cout << endl;
}

// Function to insert a node at the beginning
node *insertionAtHead(node *head, int value)
{
    // Creating a new node
    node *newnode = new node(value);
    // Pointing the new node to the current head
    newnode->next = head;
    head = newnode;
    return head;
}

// Function to insert a node at the end
node *insertAtTail(node *head, int value)
{
    // Creating a new node
    node *newnode = new node(value);
    if (head == nullptr) // If the list is empty
    {
        return newnode;
    }
    node *current = head;
    while (current->next != nullptr) // Traverse to the last node
    {
        current = current->next;
    }
    current->next = newnode; // Add the new node at the end
    return head;
}

// Function to insert a node at a specific position
node *insertAtPosition(node *head, int pos, int value)
{
    // Creating a new node
    node *newnode = new node(value);
    if (pos < 1) // Invalid position
    {
        cout << "Invalid position" << endl;
        return head;
    }
    if (pos == 1) // Insert at the head
    {
        newnode->next = head;
        head = newnode;
        return head;
    }
    node *current = head;
    int i = 1;
    while (i < pos - 1 && current != nullptr) // Traverse to the position
    {
        current = current->next;
        i++;
    }
    if (current == nullptr) // Position out of bounds
    {
        cout << "Position out of bounds" << endl;
        return head;
    }
    // Insert the new node
    newnode->next = current->next;
    current->next = newnode;
    return head;
}

int main()
{
    // Creating the initial linked list with three nodes
    node *head = new node(5);
    head->next = new node(10);
    head->next->next = new node(15);

    cout << "Initial Linked List: ";
    traverse(head);

    // Insert a node at the beginning
    head = insertionAtHead(head, 12);
    cout << "After inserting 12 at the head: ";
    traverse(head);

    // Insert a node at the end
    head = insertAtTail(head, 20);
    cout << "After inserting 20 at the tail: ";
    traverse(head);

    // Insert a node at position 3
    head = insertAtPosition(head, 3, 34);
    cout << "After inserting 34 at position 3: ";
    traverse(head);

    return 0;
}

