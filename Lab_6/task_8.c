#include <stdio.h>
int main(){
    FILE *fp;
    char filename[]="sajib.txt";
    fp = fopen(filename,"w");
    fprintf(fp,"Hello World \n");
    fprintf(fp,"File is working\n");
    fclose(fp);
    fp = fopen(filename,"a");
    fprintf(fp,"Reopen the file \n");
    fclose(fp);
    // fp = fopen(filename,"a");
    // fprintf(fp,"Reopen the file \n");
    // fclose(fp);
    return 0;
}
