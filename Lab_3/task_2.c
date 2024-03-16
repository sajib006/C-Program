/*Task 02: Rectangle
Sample input:
4
6
Sample output
123456
123456
123456
123456
*/
#include<stdio.h>
int main(){
    int i,j,n,m;
    printf("please enter your number\n");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
        printf("%d",j);
    }
    printf("\n");
    }
return 0;
}
