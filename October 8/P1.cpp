#include <iostream>
using namespace std;

struct Queue {
    int *arr;
    int front, rear, capacity, currsize;

    // Constructor to initialize the queue
    Queue(int v) {
        front = 0;
        rear = -1;
        capacity = v;
        currsize = 0;
        arr = new int[v];
    }

    // Function to display the queue
    void display() {
        if (currsize == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < currsize; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }

    // Function to add an element to the queue
    void Enqueue(int data) {
        if (currsize == capacity) {
            cout << "The queue is full" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = data;
        currsize++;
    }

    // Function to remove an element from the queue
    void Dequeue() {
        if (currsize == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Dequeued: " << arr[front] << endl;
        front = (front + 1) % capacity;
        currsize--;
    }
};

int main() {
    Queue q(5);

    // Enqueue elements
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);

    // Display the queue
    q.display();

    // Try to enqueue when full
    q.Enqueue(60);

    // Dequeue some elements
    q.Dequeue();
    q.Dequeue();

    // Display the queue after dequeue operations
    q.display();

    // Enqueue more elements
    q.Enqueue(60);
    q.Enqueue(70);

    // Display the final state of the queue
    q.display();

    return 0;
}

