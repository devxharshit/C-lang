#include <stdio.h>
int main() {
    int n, i;
    int sum = 0;
    int term = 1; 
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            sum += term;  
        } else {
            sum -= term;  
        }
        term += 2;
    }
    printf("The sum of the series is: %d\n", sum);
    return 0;
}