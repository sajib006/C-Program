
/* LAB 2 TASK 1
Write a C program that reads ten floating from
the user and prints those values.
*/
#include<stdio.h>
int main()
{
float num;
int i;
for(i=1;i<=10;i++)
{
printf("please enter your number");
scanf("%f",&num);
printf("%f\n",num);
}
return 0;
}

