//task_5
//Write a C program to find diameter, circumference and area of circle using functions.
#include<stdio.h>
float circle(float radius,float pi){
    float diameter,circum,area;
    diameter=2*radius;
    circum=2*pi*radius;
    area=pi*radius*radius;
    printf("diameter:%.2f \ncircumference:%.2f \narea:%.2f",diameter,circum,area);
return diameter,circum,area;
}
int main(){
    float radius,c;
    float pi=3.1416;
    printf("please enter your the radius of circle\n");
    scanf("%f",&radius);
    c=circle(radius,pi);
return 0;
}
