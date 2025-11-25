#include <stdio.h>

int sqrt_x(int nb) {
    if (nb == 0 || nb == 1)
        return nb;
        
    if (nb < 0)
        return -1;
    

    int i = 1;
    int result = 0;

    while (i <= nb / i) {
        result = i;
        i++;
    }
    return result;
}

int main() {
    int n = -1;
    printf("sqrt(%d) = %d\n", n, sqrt_x(n));
    return 0;
}
