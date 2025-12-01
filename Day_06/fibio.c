#include <stdio.h>

long long fib_tail(int n, long long a, long long b) {
    if (n == 0) return a;
    if (n == 1) return b;
    return fib_tail(n - 1, b, a + b);   
}
long long fib(int n) {
    return fib_tail(n, 0, 1);
}