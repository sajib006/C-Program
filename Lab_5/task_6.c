/*task_6
6.	Write a C program that can take inputs as an array. Now write a function b_search(…)
to find out the desired number from the array.*/
#include <stdio.h>
int index(int a[],int n){
    int high_index,low_index;
    high_index=n-1;
    low_index=0;
    int mid_index;
    int x;
    printf("please enter your search index\n");
    scanf("%d",&x);
    while(low_index<=high_index){
        mid_index=(low_index + high_index)/2;
        if(x==a[mid_index]){
            break;
        }
        if(x<a[mid_index]){
            high_index=mid_index-1;
        }
        else{
            low_index=mid_index+1;
        }
    }
    if(low_index>high_index){
        printf("%d is not in the array",x);
    }
    else{
        printf("%d is found in the array,it is the %d element of the array\n",a[mid_index],mid_index);
    }
return mid_index;
//}
}
int main(){
    int n;
    printf("please enter your rang\n");
    scanf("%d",&n);
    int c,i,a[n];
    printf("please enter your number\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j,temp;
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
        //for(i=0;i<5;i++){
    c=index(a,n);
       // }
return 0;
}

