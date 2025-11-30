#include <stdio.h>

int f_ispowerof2(int x) {
    if (x <= 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    if (x % 2 != 0) {
        return 0;
    }
    else {
        return f_ispowerof2(x/2);
    }

}

int main() {
    int x = 10;
    if (f_ispowerof2(x) == 1) {
        printf("%d is power of 2", x);
    }
    else {
        printf("%d is not power of 2", x);
    }
}