#include <stdio.h>

long long fib_tail(int n, long long a, long long b) {
    
    switch(n) {
        case 0: return a;
        case 1: return b;
        default: return fib_tail(n-1, b, a+b);
    }
}
int main() 
{
    int n=5;
    printf("F(%d) = %lld\n", n,fib_tail(n, 0, 1));

    return 0;
}