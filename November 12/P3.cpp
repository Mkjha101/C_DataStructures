// BALANCED TREE
#include<iostream>
#include<vector>
using namespace std;

struct node {
    int data;
    node* left, *right;
    node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Inorder traversal to store the result in a vector
void inorder(node* root, vector<int>& arr) {
    if (root == nullptr) return;

    inorder(root->left, arr);  // Traverse left subtree
    arr.push_back(root->data);  // Add the root data to the result
    inorder(root->right, arr); // Traverse right subtree
}

int main() {
    node* root = new node(5);
    root->left = new node(4);
    root->left->left = new node(3);
    root->left->left->left = new node(2);
    root->right = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(8);

    vector<int> arr; // Using a vector to store the inorder traversal result

    inorder(root, arr); // Perform inorder traversal and store the result in arr

    // Output the inorder traversal result
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

