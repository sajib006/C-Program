/*Task 14: Hollow Rectangle
Display a rectangle of given length and width.
Sample input:
4
5
Sample output
*****
*      *
*      *
*****

*/
#include<stdio.h>
int main(){
      int i,j,k,n,m;
    printf("please enter your number\n");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m){
                printf("*");
            }
            else
                printf(" ");
    }
    printf("\n");
    }
return 0;
}
