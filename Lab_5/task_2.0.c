/*task_2
  Suppose your program has a value of pi=3.14, now write a void type function. By
  using this function change the value of pi=3.1416 */
#include <stdio.h>
void value(float pi){
    float temp;
    temp=3.1416;
    pi=temp;
    printf("%.4f",pi);
    return;
}
int main(){
    float pi;
    pi=3.14;
   value(pi);
   // printf("%d",pi);
return 0;
}
