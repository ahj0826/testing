#include <stdio.h>
long long count,memo[100000];

long long f(int n){
    count ++;
    if(memo[n] != 0)
        return memo[n];
    else if(n==1 || n==2)
        return memo[n]=1;
    else
        return memo[n]=f(n-1)+f(n-2);
}

int main(){
    FILE *fp=fopen("out.txt", "w");
    int n, m;

    for(n=1;n<=100;n++){
        for(m=1;m<n;m++)
            memo[m]=0;

        count=0;
        fprintf(fp,"%d %lld %lld\n",n,count,f(n));
    }
}