#include <stdio.h>

#define SIZE 10

int main() {
    int stack[SIZE];
    int top = 0;  // Index for next push
    int choice;

    do {
        // Display menu
        do {
            printf("\n--- Stack Menu ---\n");
            printf("1) Push data into stack\n");
            printf("2) Pop data from stack\n");
            printf("3) Print stack contents\n");
            printf("4) Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
        } while (choice < 1 || choice > 4);

        if (choice == 1) {  // Push
            if (top == SIZE) {
                printf("Stack is full! Cannot push more data.\n");
            } else {
                printf("Enter an element to push into the stack: ");
                scanf("%d", &stack[top++]);
                printf("Element pushed.\n");
            }
        }

        else if (choice == 2) {  // Pop
            if (top == 0) {
                printf("Stack is empty! Nothing to pop.\n");
            } else {
                printf("Popped element: %d\n", stack[--top]);
            }
        }

        else if (choice == 3) {  // Print stack
            if (top == 0) {
                printf("Stack is empty.\n");
            } else {
                printf("Stack contents (top to bottom):\n");
                for (int i = top - 1; i >= 0; i--) {
                    printf("%d\n", stack[i]);
                }
            }
        }

    } while (choice != 4);

    printf("Exiting program.\n");
    return 0;
}
