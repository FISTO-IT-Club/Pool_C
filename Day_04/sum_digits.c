#include <stdio.h>

int sum_digits(int n) {
    int sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int n = 5;

    printf("Sum = %d\n", sum_digits(n));
    return 0;
}
