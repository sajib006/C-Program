//task_4
//Write a function that can calculate the sum and average of a given array.
#include<stdio.h>
int sum(int a[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
    sum=sum +a[i];
}
return sum;
}
double avg(double c,int n){
    double avg;
    avg=c/n;
return avg;
}
int main(){
    int n;
    printf("please enter your range\n");
    scanf("%d",&n);
    int a[n],i,c;
    double b;
    printf("please enter your number\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    c=sum(a,n);
    printf("sum:%d\n",c);
    b=avg(c,n);
    printf("avg:%.2f",b);
return 0;
}
