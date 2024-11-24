#include <iostream>
using namespace std;

#define MAX_SIZE 100

struct Stack {
    int arr[MAX_SIZE];
    int top;

    // Constructor to initialize the stack
    Stack() : top(-1) {}
};

// Function to check if the stack is empty
bool isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
bool isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element into the stack
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        cout << "Stack Overflow: Cannot push " << value << endl;
        return;
    }
    stack->arr[++stack->top] = value;
}

// Function to pop an element from the stack
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    return stack->arr[stack->top--];
}

// Function to get the top element of the stack
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    Stack stack; // Create a stack and initialize using the constructor

    // Push elements onto the stack
    push(&stack, 3);
    push(&stack, 5);
    push(&stack, 7);

    // Display top element of the stack
    cout << "Top element: " << peek(&stack) << endl;

    // Pop and display all elements
    cout << "Stack elements (popped): ";
    while (!isEmpty(&stack)) {
        cout << pop(&stack) << " ";
    }
    cout << endl;

    return 0;
}

