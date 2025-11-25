#include <stdio.h>
int factorial(int nb) {
    if(nb==0) return 1;
    else return nb * factorial(nb - 1);
}
int main() {
    int nb;
    printf("saisir un nombre : \n");
    scanf("%d", &nb);
    printf("!%d = %d\n", nb, factorial(nb));
    return 0;
}
