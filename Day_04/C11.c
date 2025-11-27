#include <stdio.h>

int f_ispowerof2(int x) {
    if (x <= 0)
        return 0;

    while (x % 2 == 0) {
        x = x / 2;
    }

    if (x = 1) {      
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Entrer Nombre : ");
    scanf("%d", &n);

    if (f_ispowerof2(n))
        printf("%d est une puis de 2.\n", n);
    else
        printf("%d n'est pas une puis de 2.\n", n);

    return 0;
}
