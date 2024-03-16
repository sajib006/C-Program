/*Task 14:
Write a C program that reads a n*n Matrix and calculate the sum for each row of the matrix.



*/
#include<stdio.h>
int main(){
      int num[3][3];
    int i,j,sum[3];
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
        scanf("%d",&num[i][j]);
    }
    }
    for(i=0;i<3;i++){
            sum[i]=0;
        for(j=0;j<3;j++){
                sum[i]=sum[i]+num[i][j];

        }
    printf("sum:%d\n",sum[i]);
    }

return 0;
}
