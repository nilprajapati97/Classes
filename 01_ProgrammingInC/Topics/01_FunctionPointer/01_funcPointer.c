#include <stdio.h>

struct st {
    int a[10];
    int (*p)(int);  // Function pointer that returns int
};

struct st temp;

// Correct increment function
int my_incre(int k) {
    temp.a[k] = temp.a[k] + 1;  // Avoid undefined behavior
    printf("In increment Value = %d\n", temp.a[k]);
    return temp.a[k];
}

// Correct decrement function
int my_decre(int k) {
    temp.a[k] = temp.a[k] - 1;
    printf("In decrement Value = %d\n", temp.a[k]);
    return temp.a[k];
}

int main() {
    int ptr[10] = {10, 2, 45, 78, 9, 5, 3, 76, 91, 77};
    int len = sizeof(ptr) / sizeof(ptr[0]);

    // Fill the array
    for (int k = 0; k < len; k++)
        temp.a[k] = ptr[k];

    printf("Initialized array: ");
    for (int i = 0; i < len; i++)
        printf("%d ", temp.a[i]);
    printf("\n");

    // Traverse and call appropriate function via function pointer
    for (int i = 0; i < len; i++) {
        if (temp.a[i] % 2 == 0) {
            temp.p = my_incre;
            temp.p(i);
        } else {
            temp.p = my_decre;
            temp.p(i);
        }
    }

    printf("\nFinal array: ");
    for (int i = 0; i < len; i++)
        printf("%d ", temp.a[i]);
    printf("\n");

    return 0;
}
