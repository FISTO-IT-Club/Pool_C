#include<stdio.h>
long long fib_tail(int n,long long a,long long b){
    if(n==0){
        return a;   
    }else if(n==1){
        return b;
    }  
    return fib_tail(n-1,b,a+b);
}

void main(){
    int n;
    printf("sisaire n:");
    scanf("%d",&n);
    if(n<0){
        printf("n est negative\n");
    }else{
        long long fib =fib_tail(n,0,1);
        printf("fib(%d)=%lld\n",n,fib);
    }
    
}
