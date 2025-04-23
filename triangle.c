#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("ENTER LENGTH OF SIDE 1=");
    scanf("%d",&a);
    printf("ENTER LENGTH OF SIDE 2="); 
    scanf("%d",&b);
    printf("ENTER LENGTH OF SIDE 3=");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+b>a){
        printf("TRIANGLE IS POSSIBLE");
        if(a==b && b==c && c==a){
            printf("\nTRIANGLE IS EQUILATERAL");
        }
        if(a==b || b==c || c==a){
            printf("\nISOCELES TRIANGLE");
        }
        if(a!=b && b!=c && c!=a){ 
            if ((a*a + b*b)==c*c || (b*b + c*c)==a*a || (c*c + a*a)==b*b)
            {
                printf("\nRIGHT ANGLED TRIANGLE");
            }
            else{
            printf("\nSCALENE TRIANGLE");
            }
        }
    }
    else{
        printf("TRIANGLE IS NOT POSSIBLE");
    }
}