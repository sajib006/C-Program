/*task_9
Write a C program to print all perfect numbers between given interval using functions.*/
#include<stdio.h>
int main(){
    int n,i,j,sum=0;
    printf("please enter your perfect number range\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=1;j<=(i/2);j++){
            if(i%j==0)
                sum=sum+j;
        }
        if(sum==i)
            printf("perfect number;%d\n",i);
            sum=0;
    }
return 0;
}
