#include <stdio.h>
// ???? used a bit wise , clever i guess :T , By Ali
int f_ispowerof2(int x) {
    if (x <= 0)
        return 0;

    return (x & (x - 1)) == 0;
}

int main() {
    int x;
    printf("Entrez un nombre : ");
    scanf("%d", &x);

    if (f_ispowerof2(x))
        printf("%d est une puissance de 2.\n", x);
    else
        printf("%d n'est PAS une puissance de 2.\n", x);

    return 0;
}

