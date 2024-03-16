
#include<stdio.h>
int main(){
    int a,i,j,s,m,x,y,r,t;
    scanf("%d",&a);
    int b[a][2];
    for(i=0;i<a;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<2;j++){
            if(b[i][0]==b[i][1]){
                s=b[i][0];
                m=s*s;
            }
        }
            if(b[i][0]>s){
                x=b[i][0]-s;
                y=x*b[i][1];
            }
            if(b[i][1]>s){
                r=b[i][1]-s;
                t=r*b[i][0];
            }
        }

        printf("%d",(m+y+t-8));



return 0;
}
