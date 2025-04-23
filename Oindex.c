#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter number of elements-");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements-");
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum+=arr[i];
        }
    }
    printf("Sum = %d\n",sum);
}