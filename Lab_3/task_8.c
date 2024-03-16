/*Task 08: Triangle - Right Justified
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
    for(i=n;i>=1;i--){
            for(j=i;j>=1;j--){
        printf(" ");
    }
    for(k=i;k<=n;k++){
        printf("%d",k);
    }
    printf("\n");
    }
return 0;
}
