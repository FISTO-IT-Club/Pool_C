#include <stdio.h>

//return 1 (true) if the number is power of two and 0 (false) if isn't
int f_ispowerof2(int x) {
    if (x < 1) return 1;

    while (x > 1) {   
        if (x%2 != 0) return 0;
        x = x/2;
    }

    return 1;
}

int main() {
    printf("%d\n", f_ispowerof2(1));
    printf("%d\n", f_ispowerof2(2));
    printf("%d\n", f_ispowerof2(4));
    printf("%d\n", f_ispowerof2(6));
}