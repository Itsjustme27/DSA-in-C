#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Function to enqueue an element
void enqueue(int x) {
    if ((rear + 1) % MAX == front) {
        printf("Queue is Full\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = x;
    printf("%d enqueued to queue\n", x);
}

// Function to dequeue an element
int dequeue() {
    if (front == -1) {
        printf("Queue is Empty\n");
        return -1;
    }
    int x = queue[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    return x;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // Queue should be full after this

    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());

    enqueue(60); // Inserting again after dequeue

    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue()); // Queue should be empty after this

    return 0;
}
