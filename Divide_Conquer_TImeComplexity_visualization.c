#include <stdio.h>
int count;

int f(int n){
    count++;
    if(n==1||n==2)
        return 1;
    else
        return f(n-1)+f(n-2);
}
 int main(){
    FILE *fp=fopen("out.txt","w");
    int n;
    for(n=1;n<=40;n++){
        count=0;
        fprintf(fp,"%d %d %d\n",n,count,f(n));
    }
    fclose(fp);
}