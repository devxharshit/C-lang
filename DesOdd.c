#include <stdio.h>

int main() {
    int N;

    // Taking input from user
    printf("Enter a number (N): ");
    scanf("%d", &N);

    // If N is even, make it odd by subtracting 1
    if (N % 2 == 0) {
        N--;
    }

    // Printing odd numbers in descending order
    printf("Odd numbers in descending order:\n");
    for (int i = N; i >= 1; i -= 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}