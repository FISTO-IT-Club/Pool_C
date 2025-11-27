#include <stdio.h>

int f_ispowerof2(int x) {
    if (x <= 0)
        return 0;

    while (x % 2 == 0) {
        return 1;
    }

    return 0;
}

int main() {
    int x = 7;

    if (f_ispowerof2(x))
        printf("%d is a power of 2\n", x);
    else
        printf("%d is not a power of 2\n", x);

    return 0;
}
