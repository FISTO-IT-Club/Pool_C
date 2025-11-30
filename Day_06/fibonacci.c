#include <stdio.h>

long long fib_tail(long long n, long long a, long long b) {

    if (n == 0) {
        return a;
    }
    
    return fib_tail(n - 1, b, a + b);
}

int main() {
    int n;
    printf("Enter a number n : ");
    scanf("%d", &n);
    long long fib_n = fib_tail(n, 0, 1);
    
    printf("Fibonacci(%d) = %lld\n", n, fib_n);
    return 0;
}