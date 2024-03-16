
#include <stdio.h>
int main(){
    int x=10;
    int y;
    int *p;
    printf("value of x : %d\n",x);//10
    p=&x;
    y=*p;//10
    *p=15;//*p=x=15
    printf("Value of x : %d\n",x);//15
    printf("Value of y : %d\n",y);//10
    printf("Value of *p : %d\n",*p);//15
    printf("Address of x : %p\n",&x);
    printf("Address of y : %p\n",&y);
    printf("Address of p : %p\n",p);
    return 0;
}
