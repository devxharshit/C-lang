#include<stdio.h>
#include<math.h>
int main(){
    int x,i,sum=0,temp=1,n;
    printf("Enter number of terms-");
    scanf("%d",&n);
    printf("Enter value of x=");
    scanf("%d",&x);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            sum+=pow(x,temp);
        }
        else{
            sum-=pow(x,temp);
        }temp+=2;
    }
    printf("sum %d",sum);
}