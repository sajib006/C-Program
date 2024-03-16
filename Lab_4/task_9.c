/*Task 9

Write a C program which reads 5 numbers into an array and prints the smallest and largest number and their location in the array.
If the user enters 7, 13, -5, 10, 6 then your program should print
“Smallest number -5 was found at location 2”.
“Largest number 13 was found at location 1”.

*/
#include<stdio.h>
int main(){
    int num[5];
    int i,larg=num[0],lctn=num[0],small=num[0];
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++){
        if(num[i]>larg){
            larg=num[i];
            lctn=i;
        }
    }
    printf("larg number is:%d was found at location:%d\n",larg,lctn);
     for(i=0;i<5;i++){
    if(num[i]<small){
        small=num[i];
        lctn=i;
    }
     }
         printf("small number is:%d was found at location:%d\n",small,lctn);
return 0;
}
