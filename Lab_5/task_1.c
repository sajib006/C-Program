//task_1
//Write a C program that can calculate the sum of 2 numbers using function.
#include<stdio.h>
int sum(int n1,int n2){
    int sum;
    sum=n1+n2;
return sum;
}

int main(){
    int n1,n2,c;
    printf("please enter your two number\n");
    scanf("%d\n%d",&n1,&n2);
    c=sum(n1,n2);
    printf("sum:%d",c);
return 0;
}
