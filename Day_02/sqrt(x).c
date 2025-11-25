#include <stdio.h>

int sqrt_x(int nb) {
    if (nb < 0) {
        return -1;
    } else {
        int result = 0;
        int i = 0;
        while(i * i <= nb) {
            result = i;
            i++;
        }
        return result;
    }
}

int main (int argc, char *argv[]) {
    int nb;
    printf("Enter a number: ");
    scanf("%d", &nb);
    int result = sqrt_x(nb);

    if (result == -1) {
        printf("Error! Square root of negative numbers is undefined.\n");
        return 1;
    }
    
    printf("The floored square root of %d is %d\n", nb, result);
    return 0;
}