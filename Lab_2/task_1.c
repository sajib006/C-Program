/* LAB 2 TASK 1
Write a C program that reads ten integers from
the user and prints those values.
*/
#include<stdio.h>
int main()
{
int i,num;
for(i=1;i<=10;i++)
{
printf("please enter your number");
scanf("%d",&num);
printf("%d\n",num);
}
return 0;
}

