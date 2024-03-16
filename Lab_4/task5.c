/*Task 5

Write a C program that reads 10 numbers from the user and prints the last odd number in the
list.
*/
#include<stdio.h>
int main(){
    int num[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    for(i=9;i>=0;i--){
        if(num[i]%2!=0){
            printf("this odd\n%d",num[i]);
            break;
        }
    }
return 0;
}
