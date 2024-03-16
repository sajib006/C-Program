/*Task 2

Write a C program that reads 10 numbers from the user. The program then reads a number
between 0 to 9, and shows the number at the corresponding index number. For instance, if the
array’s user enters 3, your program should print the value a[3].
*/
#include<stdio.h>
int main(){
    int num[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    printf("the value a[3]:%d",num[3]);
return 0;
}
