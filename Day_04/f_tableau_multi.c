#include <stdio.h>

void f_tableau_multi(int n) {
    printf("Table de multiplication de %d :\n", n);
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    f_tableau_multi(n);
    return 0;
}