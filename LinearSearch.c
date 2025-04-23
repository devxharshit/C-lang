#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    int key, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found++; 
            break;  
        }
    }
    if (found==0) {
        printf("Element not found\n");
    }
    return 0;
}