#include <stdio.h>

int sqrt_x(int nb) {
    if (nb < 0)
        return -1; 

    int i = 0;
    while ((long long)i * i <= nb) {
        i++;
    }
    return i - 1; 
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sqrt_x(n);

    if (result == -1)
        printf("Square root is not defined for negative numbers.\n");
    else
        printf("sqrt(%d) = %d\n", n, result);

    return 0;
}
