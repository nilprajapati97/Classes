#include <stdio.h>

// Function to reverse bits
unsigned int ReverseBits(unsigned int num) {
    int i, j;
    for (i = 31, j = 0; i > j; i--, j++) {
        if (((num >> i) & 1) != ((num >> j) & 1)) {
            num ^= (1U << i);
            num ^= (1U << j);
        }
    }
    return num;
}

// Helper to print binary
void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    unsigned int num = 29; // 11101 in binary

    printf("Original number: %u\nBinary: ", num);
    printBinary(num);
    printf("\n");

    unsigned int rev = ReverseBits(num);

    printf("Reversed bits:  %u\nBinary: ", rev);
    printBinary(rev);
    printf("\n");

    return 0;
}
