/*Task 04: Rectangle
Sample input:
4
6
Sample output
******
******
******
******

Hint: 4 and 6 means 4 lines of stars having 6 stars in each line.
*/
#include<stdio.h>
int main(){
       int i,j,n,m;
    printf("please enter your number\n");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
        printf("*");
    }
    printf("\n");
    }
return 0;
}
