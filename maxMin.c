#include <stdio.h>
int main() {
    int arr[5] = {10, 5, 30, 0, 50};
    int max = arr[0], min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}