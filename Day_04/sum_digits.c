#include<stdio.h>
int main(void) {
    int n, i, somme = 0;

    printf("Entrer un entier n : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        somme += i;
    }

    printf("La somme de 0 jusqu'à %d est : %d\n", n, somme);
    return 0;
}
