#include <stdio.h>

int main() {
    int i, j, space, rows;

    // Taking input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Printing spaces for right alignment
        for (space = 1; space <= rows - i; space++) {
            printf(" "); // Two spaces for better alignment
        }
        // Printing stars
        for (j = rows; j >= i; j--) {
            printf(" *");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
