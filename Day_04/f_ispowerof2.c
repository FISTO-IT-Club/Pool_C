#include <stdio.h>

int f_ispowerof2(int x) {
    int i;
    unsigned char phrase;

    for (i=1; i<x; i++) {
        if (x == i*i) {
            printf("x is a power of 2");
        }
    }
    printf("le nombre n'est pas a power of 2");
    return 0;
}

int main(){
    int number;

    printf("tapez la vleur de la nombre : ");
    scanf("%d", &number);
    f_ispowerof2(number);
}