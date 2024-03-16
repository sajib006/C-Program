/*Task 1

Write a C program that would input three numbers from the user and print sum, then the first
number, then the 2nd number followed by 3rd number. If user enters 10, 20, 30. Then output
should be 60, 10, 20, and 30.
*/

#include<stdio.h>
int main(){
    int num[3];
    int i,sum=0;
    for(i=0;i<3;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<3;i++){
        sum=sum+num[i];
        printf("%d,",num[i]);
    }
    printf("and%d",sum);
return 0;
}
