/*Task 05: Triangle - Left Justified
Draw right angled triangle of given height
Sample input:
4
Sample output
*
**
***
****

*/
#include<stdio.h>
int main(){
       int i,j,n;
    printf("please enter your number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
    }
return 0;
}
