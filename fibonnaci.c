#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Enter number of terms N-");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d",a);
        printf("\n");
        c=a+b;
        a=b;
        b=c;
   }
   return 0;
}