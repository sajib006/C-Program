/*task_3
  Write a C program to find maximum and minimum between two numbers using
  functions */
#include<stdio.h>
int num(int n1,int n2){
    int max,min;
    if(n1>=n2){
    max=n1+n2;
    min=n1-n2;
    }
    else{
       max=n2+n1;
       min=n2-n1;
    }
   printf("max:%d\nmin:%d\n",max,min);
return max,min;
}
int main(){
    int n1,n2,c;
    printf("please enter your number\n");
    scanf("%d%d",&n1,&n2);
    num(n1,n2);
return 0;
}
