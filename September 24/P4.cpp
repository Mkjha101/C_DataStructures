#include <iostream>
using namespace std;

#define n 100

class Stack {
    int* arr;
    int topIndex;

public:
    // Constructor to initialize stack
    Stack() {
        arr = new int[n];
        topIndex = -1;
    }

    // Function to push an element into the stack
    void push(int x) {
        if (topIndex == n - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++topIndex] = x;
    }

    // Function to pop the top element from the stack
    void pop() {
        if (topIndex == -1) {
            cout << "No element to pop" << endl;
            return;
        }
        topIndex--;
    }

    // Function to return the top element of the stack
    int top() {
        if (topIndex == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }
};

int main() {
    Stack st;

    // Pushing elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);

    // Display the top element
    cout << "Top element: " << st.top() << endl;

    // Popping elements from the stack
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;

    // Popping all elements
    st.pop();
    st.pop();
    cout << "Stack is empty: " << (st.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}

