
/*LAB 1 Task 5:

Write a C program that reads two numbers from the user.
Your program should then print “first is greater” if
the first number is greater, and “first is not greater”
So therwise.
*/
#include <stdio.h>
int main()
{
int num1,num2;
printf("enter the first number\n");
scanf("%d",&num1);
printf("enter the second number\n");
scanf("%d",&num2);
if(num1>num2)
{
printf("first is greater \n");
}
else
printf("first is not greater \n");
return 0;
}
