/*LAB 1 Task 6:
Write a C program that reads two numbers from
the user. Your program should then print “first
is greater” if the first number is greater,
“second is greater” if the second number is
greater, and “the numbers are equal” otherwise.
*/
#include <stdio.h>
int main()
{
int num1, num2;
printf("Please enter the first number\n");
scanf("%d",&num1);
printf("Please enter the second number\n");
scanf("%d",&num2);
if(num1>num2)
{
printf("first is greater \n");
}
else if (num2>num1) {
printf("second is greater \n");
}
else
printf("the numbers are equal \n");
return 0;
}
