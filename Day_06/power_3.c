#include <stdio.h>
#include <stdbool.h>

bool is_powerof3(int n) {
    if (n <= 0) {
        return false;
    }

    while (n % 3 == 0) {
        n = n / 3;
    }

    return n == 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_powerof3(n)) {
        printf("True It is a power of 3\n");
    } else {
        printf("False It is NOT a power of 3\n");
    }

    return 0;
}