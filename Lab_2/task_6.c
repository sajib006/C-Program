/* LAB 2 TASK 6
Write a C program that reads n numbers of integer,
and prints “The number is even” or “The number is odd”,
depending on whether the number is even or odd.
(Hint: use the modulus operator and loops)
*/
#include<stdio.h>
int main()
{
int i,n,num;
printf("please enter your input range");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("please enter your number");
scanf("%d",&num);
printf("%d\n",num);
if(num%2==0)
{
printf("The number is even \n");
}
else
printf("The number is  odd \n");
}
return 0;
}

