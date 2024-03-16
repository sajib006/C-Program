
/*LAB 1 Task 4:
Write a C program that reads two numbers from the user
and prints “first” if the first number is greater than
the second number.

*/
#include <stdio.h>
int main()
{
int num1, num2;
printf("Please enter the first number\n");
scanf("%d",&num1);
printf("Please enter the second number\n");
scanf("%d",&num2);
if (num1>num2)
{
printf("first \n");
}
return 0;
}
