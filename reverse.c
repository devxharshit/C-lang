#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number
    while (num != 0) {
        digit = num % 10;          // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to reversed
        num /= 10;                 // Remove the last digit from original number
    }

    // Print the reversed number
    printf("Reversed Number: %d\n", reversed);

    return 0;
}
