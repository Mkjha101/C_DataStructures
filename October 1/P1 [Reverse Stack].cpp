#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of a stack
void insertAtBottom(stack<int>& st, int element) {
    if (st.empty()) {
        st.push(element);
        return;
    }
    int topElement = st.top();
    st.pop();
    insertAtBottom(st, element);
    st.push(topElement);
}

// Function to reverse the stack
void reverseStack(stack<int>& st) {
    if (st.empty()) {
        return;
    }
    int topElement = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, topElement);
}

// Function to display the elements of the stack
void displayStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;

    // Pushing elements into the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // Displaying the original stack using a copy of the stack
    stack<int> originalStack = st; // Copy the stack to preserve the original
    cout << "Original Stack: ";
    displayStack(originalStack);

    // Now, reversing the original stack
    reverseStack(st);

    // Displaying the reversed stack
    cout << "Reversed Stack: ";
    displayStack(st);

    return 0;
}

