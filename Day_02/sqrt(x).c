int sqrt_x(int nb) {
    if (nb < 0)
        return -1; 

    int i = 0;
    int result = 0;

    while ((long long)i * i <= nb) {
        result = i;
        i++;
    }

    return result;
}

#include <stdio.h> 

int main() {
    printf("%d",sqrt_x(6));
    return 0;
}