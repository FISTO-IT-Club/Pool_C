//fibo.c

#include <stdio.h>

long long fib_tail(int n, int a, int b) {
    if (n == 0) {
        return a;
    }
    return fib_tail(n - 1, b, a + b);
}

long long fibonacci(int n) {
    return fib_tail(n, 0, 1);
}

int main() {
    int n;
    printf("Entrer un entier positif: ");
    scanf("%d", &n);
    printf("\nF(%d)= %lld\n", n, fibonacci(n));
    return 0;
}
