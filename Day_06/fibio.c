#include <stdio.h>

long long fib_tail(int n, long long a, long long b) {
    if (n==0) return a ;
    if (n==1) return b ;
    else {
        return fib_tail(n-1, b, a+b) ;
    }
}

int main() {
    int n, a=0, b=1 ;
    printf("saisir un enier:") ;
    scanf("%d", &n) ;
    printf("%d", fib_tail(n,a,b)) ;
    return 0 ;
}


