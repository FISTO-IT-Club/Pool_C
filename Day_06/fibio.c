#include <stdio.h>

long long fib_tail(int n, long long a, long long b) {

    if (n == 0)
        return a;

    else if (n == 1)
        return b;

    else {
        long long n2= n - 1;
        long long a2= b;
        long long b2 = a + b;

        return fib_tail(n2, a2, b2);
    }
}

int main() {
    int n;
    long long fib;

    printf("Enter n: ");
    scanf("%d", &n);

    fib = fib_tail(n, 0, 1);

    printf("Fibonacci(%d) = %lld\n", n, fib);

    return 0;
}
