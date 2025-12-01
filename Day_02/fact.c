#include<stdio.h>

int factorial(int nb) {
   if (nb == 1 || nb == 0) {
       return 1;
   }

   if (nb == 2) {
       return 2;
   }

   return nb * factorial(nb-1);
}

int main() {
    int resF = factorial(5);
    printf("resF : %d\n",resF);
    return 0;
}