#include<stdio.h>
int main(void) {
    int x;
    printf("Entrer un entier x : ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("%d n'est pas une puissance de 2\n", x);
        return 0;
    }

    while (x % 2 == 0) {  
        x = x / 2;
    }

    if (x == 1) {
        printf("C'est une puissance exacte de 2\n");
    } else {
        printf("Ce n'est pas une puissance de 2\n");
    }

    return 0;
}
