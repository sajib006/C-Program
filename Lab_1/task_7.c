
/*LAB 1 Task 7:
Write a C program that reads two numbers,
subtracts the smaller number from the
larger one, and prints the result.
*/
#include <stdio.h>
int main()
{
int num1, num2,subtract;
printf("Please enter the first number\n");
scanf("%d",&num1);
printf("Please enter the second number\n");
scanf("%d",&num2);
if(num1>num2)
{
subtract=num1-num2;
printf("The subtract is:%d\n",subtract);
}
else if(num1<num2)
{
subtract=num2-num1;
printf("The subtract is:%d\n",subtract);
}
return 0;
}
