#include <iostream>
using namespace std;

struct node
{
    int value;
    node *left, *right;

    node(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Function to print preorder traversal
void printPreorder(node* parent)
{
    if (parent == nullptr)
        return;
    
    cout << parent->value << " -> ";
    printPreorder(parent->left);
    printPreorder(parent->right);
}

// Function to create a binary tree
void create(node*& parent)
{
    // Base case: if parent is nullptr, create a new node
    if (parent == nullptr)
    {
        int value;
        parent = new node(0); // Create a new node
        cout << "Enter the value: ";
        cin >> parent->value;
    }

    // Going to the left node
    string choice;
    cout << "Do you want to enter this at left? (y/n): ";
    cin >> choice;
    if (choice == "y")
    {
        create(parent->left);  // Recursive call to create left child
    }

    // Going to the right node
    cout << "Do you want to enter this at right? (y/n): ";
    cin >> choice;
    if (choice == "y")
    {
        create(parent->right); // Recursive call to create right child
    }
}

// Main function
int main()
{
    node* parent = nullptr;
    create(parent);  // Start tree creation
    
    // Print preorder traversal of the tree
    cout << "Preorder traversal: ";
    printPreorder(parent);
    cout << endl;

    return 0;
}

