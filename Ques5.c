#include<stdio.h>
int main(){
    int num; double c;
    printf("ENTER NUMBER OF CALLS---");
    scanf("%d",&num);                                                 
    switch (num)
    {
    case 1 ... 150:
        c=0*num;
        printf("NO OF CALLS--%d",num);
        printf("CHARGE PER CALL-%f",c);
        break;
    case 151 ... 250:
        c=0.9*num;
        printf("NO OF CALLS-%d",num);
        printf("CHARGE PER CALL-%f",c);
        break;
    case 251 ... 400:
        c=1.2*num;
        printf("NO OF CALLS-%d",num);
        printf("CHARGE PER CALL-%f",c);
        break;
    case 401:
        c=1.5*num;
        printf("NO OF CALLS-%d",num);
        printf("CHaRGE PER CALL-%f",c);
        break;
    default: printf("NO OF CALLS ARE GREATER THAN 400");
        c=num*1.5;
        printf("CHARGE PER CALL-%f",c);
        break;
    }
}