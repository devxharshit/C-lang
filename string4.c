#include<stdio.h>
#include<string.h>
int main(){
    char str[]="harshit";
    int n=strlen(str);
    char str1[n-1];
    for(int i=0;str[i]!='\0';i++){
        str1[n-1]=str[i];
        n--;
        }
    printf("Reversed string:%s\n",str1);
}