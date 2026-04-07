#include<stdio.h>
#include<stdlib.h>

#define STACK_SIZE 5

typedef struct{
	int top;
	int data[STACK_SIZE];

}stack;

void initStack(stack *s ){
	s->top = -1;
}

int isFull(stack* s){
	return s->top == STACK_SIZE-1;

}
int isEmpty(stack* s){
	return s->top == -1;

}
int push(stack * s, int value)
{
	if(isFull(s)){
		printf("Erro: Stack overflow....Can not push %d\n",value);
		return -1;
	}
	s->data[++(s->top)] = value;
	printf("pushed value=%d\n", value);
	return 0;
}

int pop(stack* s, int* poppedValue) {
    if (isEmpty(s)) {
        printf("Error: Stack underflow. Nothing to pop.\n");
        return -1;
    }
    *poppedValue = s->data[(s->top)--];
    printf("Popped: %d\n", *poppedValue);
    return 0;
}


// Peek operation with underflow check
int peek(stack* s, int* topValue) {
    if (isEmpty(s)) {
        printf("Error: Stack is empty. Nothing to peek.\n");
        return -1;
    }
    *topValue = s->data[s->top];
    printf("Top element: %d\n", *topValue);
    return 0;
}

// Display stack contents
void display(stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("stack (top to bottom): ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

// Test driver
int main() {
    stack stack;
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
