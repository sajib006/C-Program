/*LAB 1 Task 11:
Write a C program that reads five numbers from
the user, and prints their average.
[Do NOT use loops]
*/
#include<stdio.h>
int main()
{
float num1,num2,num3,num4,num5,sum,average;
printf("Enter first num\n");
scanf("%f",&num1);
printf("Enter second num\n");
scanf("%f",&num2);
printf("Enter therd num\n");
scanf("%f",&num3);
printf("Enter fourth num\n");
scanf("%f",&num4);
printf("Enter fift num\n");
scanf("%f",&num5);
sum=num1+num2+num3+num4+num5;
average=sum/5;
printf("Their average  is%f \n",average);
return 0;
}

