#include <stdio.h>

int sqrt_x(int nb) {
    if (nb < 0) return -1; 

    int i = 0;
    while (i * i <= nb) {
        i++;
    }
    return i - 1; 
}

int main() {
    int Nber;

    printf("Enter number: ");
    scanf("%d", &Nber);

    int Res = sqrt_x(Nber);

    if (Res == -1)
        printf("Error \n");
    else
        printf("Square root  = %d\n", Res);

    return 0;
}
