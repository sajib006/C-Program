/* LAB 2 TASK 4
 Write a C program that reads two fractional numbers,
 subtracts the smaller number from the larger one, and
 prints the result.
*/
#include<stdio.h>
int main()
{
float num1,num2,sub;
printf("Please enter first number:");
scanf("%f",&num1);
printf("Please enter second number:");
scanf("%f",&num2);
if(num1<num2)
{
sub=num2-num1;
}
else
sub=num1-num2;
printf("subtract is:%f",sub);
return 0;
}

