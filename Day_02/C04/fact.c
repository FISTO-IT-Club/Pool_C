#include <stdio.h>

int factorial(int nb) {

    if(nb<0) {
           return -1;
       }else 
    if (nb == 0||nb ==1) {
           return 1;
       }else {
           return nb * factorial(nb-1);
    }
    }
    


int main() {
    int nbr;
    printf("Entrer a number positive : \n");
    scanf("%d",&nbr);
    int fact =factorial(nbr);
    printf("the factoriel of %d is %d\n",nbr,fact);

    return 0;
}