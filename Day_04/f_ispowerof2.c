#include <stdio.h>

int f_ispowerof2(int x) {
    if (x <= 0)
        return 0;

    return (x & (x - 1)) == 0;
}

int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (f_ispowerof2(x))
        printf("%d is a power of 2.\n", x);
    else
        printf("%d is NOT a power of 2.\n", x);

    return 0;
}
