/*Task 15: Hollow Rectangle
Display a rectangle of given length and width.
Sample input:
4
5
Sample output
12345
1      5
1      5
12345

*/
#include<stdio.h>
int main(){
      int i,j,k,n,m;
    printf("please enter your number\n");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m){
                printf("%d",j);
            }
            else
                printf(" ");
    }
    printf("\n");
    }
return 0;
}
