#include<stdio.h>
#include<conio.h>
int main(){
    int n,rem,onum,r=0;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    onum=n;
    while(n!=0){
        rem=n%10;
        r=r*10+rem;
        n/=10;
    }
    if(r==onum){
        printf("PALINDROME");
    }
    else{
        printf("NOT PALINDROME");
    }
}