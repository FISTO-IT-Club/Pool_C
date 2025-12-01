#include <stdio.h>

int factorial(int nb) {
    if (nb < 0)
        return 0;      
    if (nb == 0 || nb == 1)
        return 1;        

    return nb * factorial(nb - 1);
}

int main() {
    int n = 7;
    printf("Factorial of %d = %d\n", n, factorial(n));
    return 0;
}
