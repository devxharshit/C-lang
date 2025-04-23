#include<stdio.h>
#include<conio.h>
int main(){
    int k=1;
    int n=2;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0 ){
                printf("%d\t",n);
                n=n+2;;
                }
            if(i%2!=0){
                printf("%d\t",k);
                k=k+2;;
            }
        }
        printf("\n");
    }
}