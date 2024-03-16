
/*LAB 1 Task 2:
Write a C program that reads two numbers from the user,
and prints their sum, product and difference.
*/
#include<stdio.h>
int main()
{
int x,y,sum,product,difference;
printf("Enter first num\n");
scanf("%d",&x);
printf("Enter second num\n");
scanf("%d",&y);
sum=x+y;
product=x*y;
difference=x-y;
printf("Their sum,product and difference are %d, %d and %d \n",sum,product,difference);
return 0;
}
