#include<stdio.h>
void fact(int nb) {
        printf("Entrer un nombre :");
        scanf("%d", &nb);
        for (int i = 1; i <= nb; i++) {
            nb = nb * i;
            printf(" factoriel est : %d\n", nb);
        }
    }        
       int main() {
           int number;
           fact(number);
           return 0;    
   }