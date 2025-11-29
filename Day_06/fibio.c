#include <stdio.h>

long long fib_tail(int n, long long a, long long b) {
    if (n == 0) {
        return a;
    }
    return fib_tail(n - 1, b, a + b);
}

int main() {
    int n;
    
    printf("Enter n to calculate F(n): ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error: n must be non-negative\n");
        return 1;
    }
    
    long long result = fib_tail(n, 0, 1);
    printf("F(%d) = %I64d\n", n, result);
    
    return 0;
}