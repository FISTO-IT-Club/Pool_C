#include  <stdio.h>

 long long fib_tail(long long n, long long a, long long b)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;

    return fib_tail(n - 1, b, a+b);
}


int main() {
    int n = 10;
    long long fib_n = fib_tail(n, 0, 1);
    printf("%lld\n", fib_n);
}