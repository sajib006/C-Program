/* LAB 2 TASK 8.1
Write a C program that reads an integer, and prints the integer
if it is a multiple of either 2 or 5.
For example, 2, 4, 5, 6, 8, 10, 12, 14, 15, 16, 18, 20, 22 …

*/
#include<stdio.h>
int main (){
    int a,i;
    printf("Please enter your rang \n ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    if (i%2==0 || i%5==0)
    {
        printf("%d,",i);
    }
    }

    return 0;
}

