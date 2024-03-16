/* LAB 2 TASK 8.4
Write a C program that reads an integer, and prints the integer
if it is a multiple of NEITHER 2 NOR 5.
For example, 1, 3, 7, 9, 11, 13, 17, 19, 21, 23, 27, 29, 31, 33, 37, 39 …
*/
#include<stdio.h>
int main (){
    int a,i;
    printf("Please enter your rang \n ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    if (i%2!=0 && i%5!=0)
    {
        printf("%d,",i);
    }
    }

    return 0;
}


