#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter number to be checked");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
        if(count==2){
            printf("PRIME");
        }
        else{
            printf("NOT PRIME");
        }
    
}