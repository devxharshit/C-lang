#include<stdio.h>
#include<math.h>
int main(){
    int a,s=0,n,temp,result;
    printf("ENTER VALUE OF a--- ");
    scanf("%d",&a);
    printf("ENTER VALUE OF n- ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        s+=pow(a,i);
        temp=s;
    }
    result=temp-a;
printf("THE SUM OF THE OBTAINED SERIES IS %d",result);
}