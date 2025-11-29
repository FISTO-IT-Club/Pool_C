#include <stdio.h>

int sum_digits(int n) {
    int sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    int result = sum_digits(n);
    printf("La somme de 0 à %d est : %d\n", n, result);

    return 0;
}

