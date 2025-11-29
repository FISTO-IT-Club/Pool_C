#include <stdio.h>

long long fib_tail(int n, long long a, long long b) {
    if (n == 0) return b;
    if (n == 1) return b;
    return fib_tail(n-1, b, a+b);
}