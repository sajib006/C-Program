//task_10
//Write a C program to print the GPA for your first semester using functions.
#include<stdio.h>
float sum(float a[],int n){
    float sum=0;
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
        for(i=0;i<n;i++){
                if(a[i]<40){
            printf("fail\n");
            break;
        }
        if(a[i]>=80){
            a[i]=4.00;
        }
        if(a[i]>=70){
            a[i]=3.50;
        }
        if(a[i]>=60){
            a[i]=3.00;
        }
        if(a[i]>=50){
        a[i]=2.50;
        }
        if(a[i]>=40){
            a[i]=2.00;
        }
        sum=sum+a[i];
        }
return sum;
}
float gpa(float c,int n){
    float gpa;
    gpa=c/n;
return gpa;
}
int main(){
    int n;
    printf("please enter your subject rang\n");
    scanf("%d",&n);
    float a[n],c,b;
    int i;
    printf("please enter your subject result\n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    c=sum(a,n);
    b=gpa(c,n);
    printf("GPA:%.2f",b);
    return 0;
}
