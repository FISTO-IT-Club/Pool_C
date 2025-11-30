#include <stdio.h>

// 0 1 1 2 3 5 8 13 21 ...

long long fib_tail(int n, long long a, long long b) {
     if (n == 0)
        return a;
    return fib_tail(n - 1, b, a + b);
}

int main() {
    int n = 104; 
    long long result = fib_tail(n, 0, 1);
    printf("Fibonacci F(%d) is %lld\n", n, result);
    return 0;
}