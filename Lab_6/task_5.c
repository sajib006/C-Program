
//Pointer of a pointer
#include <stdio.h>
int main(){
    char c = 'A';
    char *p;
    p=&c;
    printf("Value of c: %d\n",*p);
    printf("Address of c: %p\n",p);
    printf("Address of p: %p\n",&p);
    return 0;

}
