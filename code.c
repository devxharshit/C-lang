#include<stdio.h>
#include<math.h>
int main(){
    int a,s=1,n,temp,result;
    printf("ENTER VALUE OF a--- ");
    scanf("%d",&a);
    printf("ENTER VALUE OF n- ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        s+=pow(a,i);  
    }
printf("THE SUM OF THE OBTAINED SERIES IS %d",s);
return 0;
}