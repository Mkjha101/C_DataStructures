#include <iostream>
using namespace std;

#define MAX_size 10

struct Stack {
    int top;
    int arr[MAX_size];

    // Constructor
    Stack() {
        top = -1;
    }

    // Functions
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

// Push operation
bool Stack::push(int x) {
    if (top >= (MAX_size - 1)) {
        cout << "Stack Overflow" << endl;
        return false;
    } else {
        arr[++top] = x;
        return true;
    }
}

// Pop operation
int Stack::pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return -1;
    } else {
        return arr[top--];
    }
}

// Peek operation to get the top element
int Stack::peek() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return -1;
    } else {
        return arr[top];
    }
}

// Check if the stack is empty
bool Stack::isEmpty() {
    return top == -1;
}

// Main function
int main() {
    Stack st;

    // Push elements into the stack
    st.push(10);
    st.push(20);
    st.push(30);

    // Display the top element and pop elements
    while (!st.isEmpty()) {
        cout << "Top element: " << st.peek() << endl;
        st.pop();
    }

    // Check if stack is empty
    cout << "Stack is empty: " << (st.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
