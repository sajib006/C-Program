
/*LAB 1 Task 3:
Write a C program that reads the radius of a circle and
prints its circumference and area.
*/
#include <stdio.h>
int main()
{
float radius, circumference, area;
float pi = 3.1416;
printf("Please enter the redious of the circle \n");
scanf("%f",&radius);
circumference = 2*pi*radius;
area = pi*radius*radius;
printf("The circumference and area is %f, %f \n", circumference, area );
return 0;
}
