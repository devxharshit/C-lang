#include<stdio.h>
int main(){
    int n,a=0,b=0,c=0,d=0,e=0;
    printf("enter nummber of elements-");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements-");
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            a++;
        }
        if(arr[i]>=1){
            b++;
        }
        if (arr[i]<0)
        {
            c++;
        }
        if(arr[i]%2==0 && arr[i]!=0){
            d++;
        }
        if(arr[i]%2!=0){
            e++;
        }  
    }
    printf("No of Zeros- %d\n",a);
    printf("No of positive elements -%d\n",b);
    printf("No of negative elements-%d\n",c);
    printf("No of even elements-%d\n",d);
    printf("No of odd elements- %d\n",e);
}