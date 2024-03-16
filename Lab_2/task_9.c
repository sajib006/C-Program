/* LAB 2 TASK 9
Write a C program that reads a student’s mark for
a single subject, and prints out “Pass” if the
student got more than 50, and “You shall not pass” otherwise
*/
#include<stdio.h>
int main()
{
int n;
printf("please emter students mark\n");
scanf("%d",&n);
if(n>50)
{
printf("pass \n");
}
else
printf("you shall not pass \n");
return 0;
}
