#include<stdio.h>
int main()
{
    int rows = 5;
    // first loop for printing rows​
    for (int i = 0; i < rows; i++) {
        // second loop for printing character in each rows​
        for (int j = i; j < rows; j++){
            printf("* ");
        }  
        printf("\n");
    }
    return 0;
}