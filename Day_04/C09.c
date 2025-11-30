#include <stdio.h>

void f_tableau_multi(int n) {
    int i;

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n;

    printf("Entrez Nombre : ");
    scanf("%d", &n);

    printf("Tableau de multiplication de %d :\n", n);
    f_tableau_multi(n);

    return 0;
}
