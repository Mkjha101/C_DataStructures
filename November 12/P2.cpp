// BINARY SEARCH TREES
#include<iostream>
#include<queue>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Insertion in BST
node* insertionBST(node* root, int value)
{
    if (value < root->data) // left side
    {
        if (root->left != nullptr)
        {
            return insertionBST(root->left, value);
        }
        else
        {
            root->left = new node(value);
        }
    }
    else
    {
        if (root->right != nullptr)
        {
            return insertionBST(root->right, value);
        }
        else
        {
            root->right = new node(value);
        }
    }
    return root;
}

// Inorder traversal (left - root - right)
void inorder(node* root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder traversal (left - right - root)
void postorder(node* root)
{
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Preorder traversal (root - left - right)
void preorder(node* root)
{
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Breadth-First traversal
void BFTraversal(node* root)
{
    if (root == nullptr) return;
    queue<node*> q;
    q.push(root);
    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left != nullptr) q.push(temp->left);
        if (temp->right != nullptr) q.push(temp->right);
    }
}

// Searching for a value in BST
bool Searching(node* root, int key)
{
    if (root == nullptr) return false;

    if (root->data == key) return true;

    if (key < root->data)
        return Searching(root->left, key);
    else
        return Searching(root->right, key);
}

// Finding the minimum value node in BST
node* FindMin(node* root)
{
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

// Deleting a node in BST
node* Delete(node*& root, int key)
{
    if (root == nullptr) return nullptr;

    if (key < root->data)
    {
        root->left = Delete(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = Delete(root->right, key);
    }
    else
    {
        // Node to be deleted found
        // 0 child
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }
        // 1 child
        if (root->left == nullptr || root->right == nullptr)
        {
            node* temp = root->left ? root->left : root->right;
            delete root;
            return temp;
        }
        // 2 children
        node* temp = FindMin(root->right);
        root->data = temp->data;
        root->right = Delete(root->right, temp->data);
    }
    return root;
}

int main()
{
    node* root = new node(50);
    root->left = new node(30);
    root->right = new node(70);
    root->left->left = new node(20);
    root->left->right = new node(40);
    root->right->left = new node(60);
    root->right->right = new node(80);

    // Deleting a node (e.g., deleting node with value 60)
    root = Delete(root, 60);

    // Performing Breadth-First Traversal
    cout << "Breadth First Traversal: ";
    BFTraversal(root);
    cout << endl;

    // Performing Preorder Traversal
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    // Performing Postorder Traversal
    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    // Performing Inorder Traversal
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    // Searching for a value in the BST
    int key = 40;
    cout << "Is " << key << " present? " << (Searching(root, key) ? "Yes" : "No") << endl;

    return 0;
}

