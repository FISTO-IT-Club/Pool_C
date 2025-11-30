#include<stdio.h>
int f_ispowerof2(int x) {
    if (x > 0 && (x & (x - 1)) ==0) {
        printf("%d est une puissance de 2\n", x);
    } else {
        printf("%d n'est pas une puissance de 2\n", x);
        return 0;
    }
}
int main() {
int x;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &x);
    f_ispowerof2(x);
    return 0;
}


