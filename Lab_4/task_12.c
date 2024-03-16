/*Task 12:
Write a C program that reads 10 numbers from the user, and then prints them in the reverse order
*/
#include<stdio.h>
int main(){
      int num[10];
    int i,j,temp;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
       for(i=0;i<10;i++){
           printf("%d,",num[i]);
       }
return 0;
}
