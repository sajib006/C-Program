#include <stdio.h>
int main(){
    int x=10,y;
    int *p,*q;
    p= &x;
    q=&y;
    y=*p;//10;
    *p=15;//x=15
    *q=20;

    printf("Value of x: %d\n",x);
    printf("Value of y: %d\n",y);
    printf("Value of *p: %d\n",*p);
    printf("Address of p: %p\n",&p);
    printf("Value of *q: %d\n",*q);
    printf("Address of q: %p\n",&q);
    return 0;
}

