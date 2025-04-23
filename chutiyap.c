#include<stdio.h>
int main(){
    int n=5;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d",j);
            }
            }
            for(int j=0;j<i;j++){
                if(i%2==0){
                    printf("%c",ch+j);
                }  
        }
        printf("\n");
    }
}