#include <stdio.h>

long long fib_tail(int n, long long a, long long b) {
    if (n == 0)
        return a;
    if (n == 1)
        return b;

        return fib_tail(n - 1, b, a + b); 
} 

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    long long result = fib_tail(n, 0, 1);
    printf("F(%d) = %lld\n", n, result);

    return 0;
}