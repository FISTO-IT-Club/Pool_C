#include <stdio.h>

int factorial(int nb) {
    if (nb < 0)
        return -1;
    if (nb == 0 || nb == 1)
        return 1;
    return nb * factorial(nb - 1);
}
int main(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    if (result == -1)
        printf("Error: Factorial not defined for negative numbers!\n");
    else
        printf("Factorial of %d = %d\n", num, result);
    
    return 0;
}
