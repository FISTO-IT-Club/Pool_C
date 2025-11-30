#include <stdio.h>

void f_ispowerof2(int x) {
    if (x <= 0) {
        printf("ce nombre est negatif ou nul donc nest pas un power of 2\n");
        return;
    }
    while (x % 2 == 0) {
        x = x / 2;
    }
    if (x == 1) {
        printf("ce nombre est un power of 2\n");
    } else {
        printf("ce nombre n'est pas un power of 2\n");
    }
}

int main() {
    int n;
    printf("donner un nombre: ");
    scanf("%d", &n);
    f_ispowerof2(n);
    return 0;
}