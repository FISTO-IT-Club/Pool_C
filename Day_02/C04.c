#include <stdio.h>

int factorial(int nb) {
    if (nb < 0) {
        return -1;
    }

    if (nb == 0 || nb == 1) {
        return 1; 
    }

    int Res = 1;
    int i = 1;

    while (i <= nb) {
        Res *= i;
        i++;
    }

    return Res ;
}

int main() {
    int nber;

    printf("Enter a number: ");
    scanf("%d", &nber);

    int Res = factorial(nber);

    if (Res == -1)
        printf("Error \n");
    else
        printf("Factorial = %d\n", Res);

    return 0;
}

