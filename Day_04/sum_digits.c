#include <stdio.h>
#include <stdlib.h>

int sum_digits(int n) {
    int i, sum= 0;
    for (i=0;i<=n;i++) {
        sum+= i;
    }
    return sum;
}

int main() {
    int n;
    printf("Entrez votre nombre:\n(doit etre positive)=> ");
    scanf("%d", &n);
    if (n < 0) {
        printf("il faut que le nombre doit etre positive.\n");
        return 1;
    } else if (n == 0) {
        printf("La somme des chiffres de 0 est: 0 lui meme\n");
        return 0;
    }
    else;
        int som = sum_digits(n);
        printf("La somme des chiffres de %d est: %d\n", n, som);
        exit(0);
    exit(0);
}