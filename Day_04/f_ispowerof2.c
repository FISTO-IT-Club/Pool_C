#include <stdio.h>

int f_ispowerof2(int x) {
	
    if (x <= 0)
        return 0;

    while (x % 2 == 0) {
        x = x / 2;
    }

    return (x == 1);
}

int main() {
    int x;
    printf("Entrer un nombre: ");
    scanf("%d", &x);

    if (f_ispowerof2(x))
        printf("%d est une puissance de 2\n", x);
    else
        printf("%d n'est pas une puissance de 2\n", x);

    return 0;
}
