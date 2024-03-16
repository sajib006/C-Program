/* LAB 2 TASK 10
Write a C program that reads a student’s mark for a single subject,
and prints out the corresponding grade for that mark. The mark ranges
and corresponding grades are shown in the table below.
Marks
Grade
90 and above A ,80-89  B ,70-79 C, 60-69 D, 50-59 E, Below 50 F
*/
#include<stdio.h>
int main()
{
int a;
printf("please enter students mark: ");
scanf("%d",&a);
if (90<=a && a<=100)
{
printf ("A");
}
else if (80<=a && a<=89)
{
printf ("B") ;
}
else if (70<=a && a<=79)
{
printf("C");
}
else if (60<=a && a<=69)
{
printf("D");
}
else if (50<=a && a<=59)
{
printf ("E");
}
else if (0<=a && a<=49)
{
printf("F");
}
return 0;
}

