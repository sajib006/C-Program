/*task_7
Write a C program to convert a upper case string into a lower case string using functions.  */
#include<stdio.h>
int main(){
    char s[30];
    printf("enter string:");
    gets(s);
    int i;
    for(i=0;i<=30;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    printf("%s",s);
return 0;
}
