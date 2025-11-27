#include <stdio.h>
#include <stdlib.h>

void f_tableau_multi(int n) {
    int i;
    for (i =0;i<=10;i++) {
        int m;
        m =n*i;
        printf("Le produit de %d et %d est: %d", n, i, m);
    }
}
int main() {
    int n;
    printf("Entrez votre nombre: ");
    scanf("%d", &n);
    printf("Le tableau de multiplication de %d par (0 à 10) est:\n", n);
    f_tableau_multi(n);
    return 0;
}