#include <stdio.h>
#include <math.h>

int sqrt_x(int nb) {
    float racine ;
    racine= pow(nb, 0.5) ;
    return racine ;
}

int main() {
    int a ;
    float s ;
    printf("saisir un nbre:") ;
    scanf("%d", &a) ;
    s=sqrt_x(a) ;
    printf("%f",s) ;
    return 0 ;
} 