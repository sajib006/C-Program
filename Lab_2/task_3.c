/* LAB 2 TASK 3
 Write a C program that reads n numbers of integers
 from the user. Your program should calculate their
 sum and average
*/
#include<stdio.h>
int main()
{
float i,n,num,sum,avg;
printf("please enter your input range");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
printf("please enter your number");
scanf("%f",&num);
printf("%f\n",num);
sum=sum+num;
}
printf("the sum is%f",sum);
avg=sum/n;
printf("the average is%f",avg);
return 0;
}

