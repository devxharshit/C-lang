#include<stdio.h>
int main(){
    char str[]="helol";
    char key;
    int count=1,s;
    printf("Enter letter to be searched-");
    scanf("%c",&key);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==key){
            count=i;
        }
    }
    if(count!=1){
        printf("Last occurence is at index %d\n",count);
    }
    else{
        printf("Element not found");
    }
}