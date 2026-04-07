
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5  // You can change size here

typedef struct {
    int data[STACK_SIZE];
    int top;
} Stack;

// Initialize stack
void initStack(Stack* s) {
    s->top = -1;
}

// Check if stack is full
int isFull(Stack* s) {
    return s->top == STACK_SIZE - 1;
}

// Check if stack is empty
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Push operation with overflow check
int push(Stack* s, int value) {
    if (isFull(s)) {
        printf("Error: Stack overflow. Cannot push %d\n", value);
        return -1;
    }
    s->data[++(s->top)] = value;
    printf("Pushed: %d\n", value);
    return 0;
}

// Pop operation with underflow check
int pop(Stack* s, int* poppedValue) {
    if (isEmpty(s)) {
        printf("Error: Stack underflow. Nothing to pop.\n");
        return -1;
    }
    *poppedValue = s->data[(s->top)--];
    printf("Popped: %d\n", *poppedValue);
    return 0;
}

// Peek operation with underflow check
int peek(Stack* s, int* topValue) {
    if (isEmpty(s)) {
        printf("Error: Stack is empty. Nothing to peek.\n");
        return -1;
    }
    *topValue = s->data[s->top];
    printf("Top element: %d\n", *topValue);
    return 0;
}

// Display stack contents
void display(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack (top to bottom): ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

// Test driver
int main() {
    Stack stack;
    initStack(&stack);

    int value;

    // Test popping from empty stack
    pop(&stack, &value);

    // Test peeking on empty stack
    peek(&stack, &value);

    // Fill the stack
    for (int i = 1; i <= STACK_SIZE + 1; i++) {
        push(&stack, i * 10);  // Should trigger overflow on last
    }

    display(&stack);

    // Peek the top element
    peek(&stack, &value);

    // Pop all elements + one extra to test underflow
    for (int i = 0; i < STACK_SIZE + 1; i++) {
        pop(&stack, &value);
    }

    display(&stack);

    return 0;
}