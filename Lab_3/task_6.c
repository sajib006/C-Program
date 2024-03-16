/*Task 06: Triangle - Left Justified
Draw right angled triangle of given height
Sample input:
4
Sample output
1
12
123
1234
*/
#include<stdio.h>
int main(){
       int i,j,n;
    printf("please enter your number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
    }
return 0;
}
