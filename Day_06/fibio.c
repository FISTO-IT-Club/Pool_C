#include <stdio.h>
#include <stdlib.h>

long long fib_tail(int n, long long a, long long b) {
    if (n< 0) {
        printf("Le nombre doive etre positive.\n");
        exit(0);
    }
    else if (n== 1) {
        return b;
    }
    else if (n== 0) {
        return a;
    }
    else;
        return fib_tail(n-1, b, a+b);
}

int main() {
    printf("Entrez votre nombre: ");
    int n;
    scanf("%d", &n);
    long long s = fib_tail(n,0,1);
    printf("F(%d) = %lld\n",n,s);
    return 0;
}