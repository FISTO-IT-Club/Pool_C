#include <stdio.h>
#include <math.h>

int sqrt_x(int nb) {
    return (int) round(sqrt(nb));
}

int main() {
    printf("%d", sqrt_x(25));
    return 0;
}