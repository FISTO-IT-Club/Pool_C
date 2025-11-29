#include <stdio.h>

long long fib_tail(int n ,long long a ,long long b){
    if(n==0){return a;}
    else if (n==1){return b;}
    return fib_tail(n-1,b,a+b);
}
int main(){
    int n ;
    printf("print n ");
    scanf("%d",&n);
    printf("fibonacci number F(%d) = %lld \n",n,fib_tail(n,0,1));
    return 0;
}