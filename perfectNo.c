#include<stdio.h>
#include<conio.h>
int main(){
    int num,i,result=0;
    printf("ENTER NUMBER TO CHECK IF IT IS PERFECT OR NOT:");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if((num%i==0))
        {
            result+=i;
        }
    }
    if(result==num)
    {
        printf("PERFECT NUMBER");
    }
    else{
        printf("NOT A PERFECT NUMBER");
    }
}