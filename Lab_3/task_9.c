/*Task 09: Triangle - Right Justified
Draw right angled triangle of given height
Sample input:
4
Sample output


*/
#include<stdio.h>
int main(){
      int i,j,k,n;
    printf("please enter your number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=i;k++){
        printf("%d",k);
    }
    printf("\n");
    }
return 0;
}
