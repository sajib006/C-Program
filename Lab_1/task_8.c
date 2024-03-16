
/*LAB 1 Task 8:
Write a C program that reads a number, and prints
“The number is even” or “The number is odd”,
depending on whether the number is even or odd.
*/
#include <stdio.h>
int main()
{
int n;
printf("Please enter the number \n");
scanf("%d",&n);
if(n%2 == 0)
{
printf("The number is even \n");
}
else
printf("The number is odd \n");
return 0;
}
