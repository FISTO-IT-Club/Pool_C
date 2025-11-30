#include <stdbool.h>

bool is_powerof3(int n) {
    if (n < 1) return false;
    while (n % 3 == 0) {
        n =n/ 3;
    }
    return n == 1;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (is_powerof3(n))
        printf("%d is a power of 3.", n);

    else
        printf("%d is not a power of 3.", n);

    return 0;
}

