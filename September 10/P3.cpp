// Here we are learning single linked list
// This is the starting of the single linked list with the help of an object of a class
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    // Constructor to initialize a new node
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to traverse and print the linked list
void traverseLinkedlist(node *start)
{
    node *current = start;
    while (current != nullptr)
    {
        cout << current->data << "  ";
        current = current->next;
    }
    cout << endl;
}

// Function to insert at the beginning of the linked list
node *insertionatBeginning(node *head, int data)
{
    node *newnode = new node(data);
    newnode->next = head; // Pointing to the current head
    head = newnode;       // Updating the head
    return head;
}

// Function to insert at the end of the linked list
node *insertionatend(node *head, int data)
{
    node *newnode = new node(data); // Create a new node
    if (head == nullptr)           // If the list is empty
    {
        return newnode; // The new node becomes the head
    }
    node *current = head;
    while (current->next != nullptr) // Traverse to the last node
    {
        current = current->next;
    }
    current->next = newnode; // Add the new node at the end
    return head;
}

int main()
{
    // Creating the initial linked list with two nodes
    node *head = new node(5);
    head->next = new node(10);

    cout << "Initial Linked List: ";
    traverseLinkedlist(head);

    // Insertion at the beginning
    head = insertionatBeginning(head, 15);
    cout << "After inserting 15 at the beginning: ";
    traverseLinkedlist(head);

    // Insertion at the end
    head = insertionatend(head, 20);
    cout << "After inserting 20 at the end: ";
    traverseLinkedlist(head);

    return 0;
}

