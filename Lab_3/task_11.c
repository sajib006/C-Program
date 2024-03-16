/*Task 11: Triangle - Isosceles
Draw triangle of given height
Sample input 1:
3
Sample output 1:
1
123
12345

Sample input 2:
4
Sample output 2:
1
123
12345
1234567


*/
#include<stdio.h>
int main(){
      int i,j,k,n;
    printf("please enter your number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(j=i;j<=n;j++){
        printf(" ");
    }
    for(k=1;k<(i*2);k++){
        printf("%d",k);
    }
    printf("\n");
    }
return 0;
}
