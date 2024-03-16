/*Task 03: Star Line
Print as many stars as given in input
Sample input:
6
Sample output
******
*/
#include<stdio.h>
int main(){
    int i,n;
    printf("please enter your number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("*");
    }
return 0;
}
