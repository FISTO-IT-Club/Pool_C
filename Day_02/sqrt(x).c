#include <stdio.h>
#include <stdlib.h>

int sqrt_x(int nb) {
   if (nb < 0) {
       printf("Impossible de calculer la racine carrée d'un nombre négatif!\n");
       return -1;
   }
   if (nb == 0 || nb == 1) {
       return nb;
   }
   int a = 1, b = nb, resultat = 0, c;
   while (a <= b) {
        c = a + (b - a ) / 2;
        if (c == nb / c) {
            return c;
        } 
        if (c < nb / c) {
            a = c + 1;
            resultat = c;
        } else {
            b = c - 1;
        }  
    return resultat;      
    }     
}

int main(void) {
    int n;
    printf("Entrer votre nombre pour calculer sa racine carrée:\n");
    scanf("%d", &n);
    int resultat = sqrt_x(n);
    if (resultat != -1) {
        printf("La racine carrée de %d est %d.\n", n, resultat);
    }
    exit(0);
}