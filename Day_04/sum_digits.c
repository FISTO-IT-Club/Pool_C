#include <stdio.h>

int sum_digits(int n) {
    if (n < 0)
        return 0;   

    return n * (n + 1) / 2;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sum_digits(n);
    printf("Sum from 0 to %d = %d\n", n, result);

    return 0;
}

