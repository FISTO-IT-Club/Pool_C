#include <stdio.h>

int sqrt_x(int nb) {
    if (nb < 0)
        return -1;
    if (nb == 0 || nb == 1)
        return nb;
    
    int i = 1;
    int result = 1;
    
    while (result <= nb) {
        i++;
        result = i * i;
    }
    
    return i - 1;
}

int main(void) {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = sqrt_x(num);
    
    if (result == -1)
        printf("Error: Square root not defined for negative numbers!\n");
    else
        printf("Square root of %d (rounded down) = %d\n", num, result);
    
    return 0;
}