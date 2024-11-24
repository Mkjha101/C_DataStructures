// AVL TREES
#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    int height;
    node(int d)
    {
        data = d;
        left = right = nullptr;
        height = 1; // Initial height of new node is 1
    }
};

// Function to calculate height
int height(node *root)
{
    if (root == nullptr)
        return 0;
    return root->height;
}

// Right rotation to balance the tree
node *rightRotation(node *y)
{
    node *x = y->left;
    node *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x; // New root after rotation
}

// Left rotation to balance the tree
node *leftRotation(node *x)
{
    node *y = x->right;
    node *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y; // New root after rotation
}

// Calculate balance factor of a node
int balanceFactor(node *root)
{
    if (root == nullptr)
        return 0;
    return height(root->left) - height(root->right);
}

// AVL tree insertion with balancing
node *insertionInAVL(node *root, int value)
{
    // 1. Perform the normal BST insert
    if (root == nullptr)
    {
        return new node(value);
    }

    if (value < root->data)
    {
        root->left = insertionInAVL(root->left, value);
    }
    else
    {
        root->right = insertionInAVL(root->right, value);
    }

    // 2. Update height of this ancestor node
    root->height = max(height(root->left), height(root->right)) + 1;

    // 3. Get the balance factor
    int balance = balanceFactor(root);

    // 4. If the node becomes unbalanced, then there are 4 cases

    // Left Left Case
    if (balance > 1 && value < root->left->data)
    {
        return rightRotation(root);
    }

    // Right Right Case
    if (balance < -1 && value > root->right->data)
    {
        return leftRotation(root);
    }

    // Left Right Case
    if (balance > 1 && value > root->left->data)
    {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }

    // Right Left Case
    if (balance < -1 && value < root->right->data)
    {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }

    // Return the (unchanged) node pointer
    return root;
}

// Level order traversal (Breadth-first traversal)
void levelOrderTraversal(node *root)
{
    if (root == nullptr)
        return;
    
    queue<node *> q;
    q.push(root);
    
    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = nullptr;

    // Insert initial nodes
    root = insertionInAVL(root, 100);
    root = insertionInAVL(root, 50);
    root = insertionInAVL(root, 200);
    root = insertionInAVL(root, 10);
    root = insertionInAVL(root, 70);
    root = insertionInAVL(root, 5);
    root = insertionInAVL(root, 30);

    // Print the level order traversal
    cout << "Level order traversal: ";
    levelOrderTraversal(root);
    cout << endl;

    // Inserting a new value
    int val;
    cout << "Enter the value to insert: ";
    cin >> val;
    root = insertionInAVL(root, val);

    // Print the level order traversal after insertion
    cout << "Level order traversal after insertion: ";
    levelOrderTraversal(root);
    cout << endl;

    return 0;
}

