
#include <stdio.h>
int main(){
    FILE *fp1, *fp2;
    char *input_file = "in.txt";
    char *output_file = "out.txt";
    int num1, num2, sum;
    fp1= fopen(input_file,"r");
    fp2 =fopen(output_file,"w");
    fscanf(fp1,"%d",&num1);
    fscanf(fp1,"%d",&num2);
    sum =num1+num2;
    printf("%d %d %d \n",num1,num2,sum);
    fprintf(fp2,"%d\n",sum);
    fprintf(fp2,"Successful");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
