/*Task 7

Write a C program which reads 5 numbers into an array and prints the largest number.
If the user enters 7, 13, 2, 10, 6 then your program should print 13.
*/
#include<stdio.h>
int main(){
    int num[5];
    int i,larg=num[0];
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++){
        if(num[i]>larg)
            larg=num[i];
    }
    printf("larg number is:%d\n",larg);
return 0;
}
