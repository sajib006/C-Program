/*Task 13:
Write a C program that reads a 5*5 Matrix and prints the value in order.
Sample Input



*/
#include<stdio.h>
int main(){
      int num[5][5];
    int i,j,temp;
    for(i=0;i<5;i++){
            for(j=0;j<5;j++){
        scanf("%d",&num[i][j]);
    }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
return 0;
}
