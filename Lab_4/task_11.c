/*Task 11

Write a C program which reads 5 numbers into an array, sorts/arranges the numbers from high to low and prints all numbers in the array.
If the user enters 7, 13, 2, 10, 6 then your program should print 13, 10, 7, 6, 2.

*/
#include<stdio.h>
int main(){
      int num[5];
    int i,j,temp;
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(num[i]<num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
        for(i=0;i<5;i++){
            printf("%d,",num[i]);
        }
return 0;
}
