#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to check if the queue is full
int isFull() {
    return rear == MAX - 1;
}

// Function to enqueue an element
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue.\n");
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    queue[++rear] = value;
    printf("%d enqueued to the queue.\n", value);
}

// Function to dequeue an element
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }
    int value = queue[front];
    if (front == rear) {
        front = rear = -1; // Reset queue if it becomes empty
    } else {
        front++;
    }
    printf("%d dequeued from the queue.\n", value);
    return value;
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}