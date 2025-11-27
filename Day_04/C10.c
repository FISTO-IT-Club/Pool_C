#include <stdio.h>

int sum_digits(int n) {
    int i, sum = 0;

    for (i = 0; i <= n; i++) {
        sum = sum + i; 
    }
    return sum;
}

int main() {
    int n;

    printf("Entrer Nombre : ");
    scanf("%d", &n);
     printf("La somme de 0 a %d est : %d\n", n, sum_digits(n));

    return 0;
}
