/*LAB 1 Task 12:
Write a C program that reads five numbers
as input from the user, and prints whether
the numbers are odd or even. [Do NOT use loops]

*/
#include<stdio.h>
int main()
{
int num1,num2,num3,num4,num5,odd,even;
printf("please enter the first number");
scanf("%d",num1);
printf("please enter the second number");
scanf("%d",num2);
printf("please enter the therd umber");
scanf("%d",num3);
printf("please enter the fourth number");
scanf("%d",num4);
printf("please enter the fift number");
scanf("%d",num5);
if(num1%2 == 0)
{
printf("The number is even \n");
}
else
printf("The number is odd \n");
if(num2%2 == 0)
{
printf("The number is even \n");
}
else
printf("The number is odd \n");
if(num3%2 == 0)
{
printf("The number is even \n");
}
else
printf("The number is odd \n");
if(num4%2 == 0)
{
printf("The number is even \n");
}
else
printf("The number is odd \n");
if(num5%2 == 0)
{
printf("The number is even \n");
}
else
printf("The number is odd \n");
return 0;
}

