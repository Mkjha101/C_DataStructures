#include <stdio.h>
#include <stdlib.h>

struct queue {
    int front;
    int rear;
    int *arr;
    int size;
};

// Function to check if the queue is empty
int isempty(struct queue *q) {
    return q->front == -1;
}

// Function to check if the queue is full
int isfull(struct queue *q) {
    return (q->rear + 1) % q->size == q->front;
}

// Function to enqueue an element into the queue
void enqueue(struct queue *q, int val) {
    if (isfull(q)) {
        printf("Queue is full (Overflow)\n");
        return;
    }
    if (isempty(q)) {
        q->front = q->rear = 0; // Initialize front and rear for the first element
    } else {
        q->rear = (q->rear + 1) % q->size; // Circular increment
    }
    q->arr[q->rear] = val;
    printf("%d enqueued\n", val);
}

// Function to dequeue an element from the queue
int dequeue(struct queue *q) {
    if (isempty(q)) {
        printf("Queue is empty (Underflow)\n");
        return -1;
    }
    int dequeuedValue = q->arr[q->front];
    if (q->front == q->rear) {
        // If the queue becomes empty after dequeuing
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % q->size; // Circular increment
    }
    printf("%d dequeued\n", dequeuedValue);
    return dequeuedValue;
}

// Main function to demonstrate the circular queue
int main() {
    struct queue q;
    q.size = 5; // Set the size of the queue
    q.front = q.rear = -1; // Initialize front and rear
    q.arr = (int *)malloc(q.size * sizeof(int)); // Allocate memory for the queue

    // Perform enqueue operations
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    // Attempt to enqueue into a full queue
    enqueue(&q, 60);

    // Perform dequeue operations
    dequeue(&q);
    dequeue(&q);

    // Enqueue more elements to demonstrate circular behavior
    enqueue(&q, 60);
    enqueue(&q, 70);

    // Free allocated memory
    free(q.arr);

    return 0;
}

