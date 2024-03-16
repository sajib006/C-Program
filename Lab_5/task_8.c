/*task_8
Write a C program to check whether a number is even or odd using functions.*/
#include <stdio.h>
void num(int x){
if(x%2==0){
    printf("even");
}
else{
    printf("odd");
}
    return;
}
int main(){
    int x,c;
    printf("please enter your number\n");
    scanf("%d",&x);
    num(x);
return 0;
}
