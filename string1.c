#include<stdio.h>
int main(){
    char s[]="Hello World";
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    printf("CHANGED STRING: %s\n",s);
}
