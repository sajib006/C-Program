
#include <stdio.h>
int main(){
    FILE *fp;
    char filename[]="zillu.txt";
    fp = fopen(filename,"w");
    fprintf(fp,"Hello World \n");
    fprintf(fp,"File is working\n");
    fclose(fp);
    return 0;
}
