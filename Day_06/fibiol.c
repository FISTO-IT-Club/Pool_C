#include <stdio.h>

long long fib_tail (int n, long long a, long long b){

    if (n == 0) return a;
    if (n == 1) return b;
    fib_tail(n-1, b, a+b);

}

int main (void){

    int n ;
    printf("would you enter a number:");
    scanf("%d",&n);
    printf("%lld", fib_tail(n, 0, 1));
    return 0;
}