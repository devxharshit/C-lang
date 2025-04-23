#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n,rem,s=0,i=0;
    printf("ENTER NUMBER-");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        s+=rem*pow(2,i);
        n/=10;
        i++;
    }
    printf("\nResult- %d",s);
}