/* LAB 2 TASK 7
Write a C program that reads an integer, and if the number
is even and greater than 10, prints “An even number greater
than 10”. If the number is even but lesser than 10, print “An
even number not greater than 10”. If the number is greater than
10 but odd, print “An odd number greater than 10”. If the number
is odd and also less than 10, print “An odd number less than 10”.
*/
#include<stdio.h>
int main()
{
int a;
printf("please enter your number: ");
scanf("%d",&a);
if (a>10)
{
if (a/2==0)
{
printf ("An even number greater than 10");
}
else
{
printf("An odd number greater than 10");
}
}
else
{
if (a/2==0)
{
printf("An even number not greater than 10");
}
else
{
printf("An odd number less than 10");
}
}
return 0;
}

