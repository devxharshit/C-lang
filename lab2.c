#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,rows,space;
    printf("ENTER NUMBER OF ROWS TO BE PRINTED-");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=(rows-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        } printf("\n");
    }
}