/*Task 4

Write a C program that reads 10 numbers from the user and prints the first even number in the
list.
*/

#include<stdio.h>
int main(){
    int T,N;
    scanf("%d",&T);
    int j=1;
    while(j<=T){

    scanf("%d",&N);
    int num[N];
    int i,sum=0,large=0,j;
    for(i=0;i<N;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<N;i++){
            for(j=i+1;j<N;j++){
            if(num[i]!=num[j]){
        sum = sum+num[i];

            }
            }
    }
            printf("Case %d: %d\n",j,sum);
            j++;
    }


return 0;
}
