#include<stdio.h>
int main(){
    int n,a,b;
    printf("Enter Number of elements-");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements-");
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter lower index-");
    scanf("%d",&a);
    printf("Enter upper index-");
    scanf("%d",&b);
    printf("Subarray-");
    for(int j=a;j<=b;j++){
        printf("%d\n",arr[j]);
    }
}