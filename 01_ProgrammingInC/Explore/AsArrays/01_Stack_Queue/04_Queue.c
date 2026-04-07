#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Add element to the queue
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full!\n");
        return;
    }

    if (front == -1) front = 0;  // First element

    rear++;
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
}

// Remove element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Dequeued: %d\n", queue[front]);
    front++;

    if (front > rear) {
        // Reset the queue after last element
        front = rear = -1;
    }
}

// Display the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    display();

    enqueue(60); // Should say "Queue is full"

    return 0;
}
