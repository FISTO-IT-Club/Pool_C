#include <stdio.h>

int factorial(int nb) {
    int result = 1;
    for (int i = nb; i >= 1; i--) {
        result *= i;
    }
    return result;
}

int main() {
    
    printf("%d",    factorial(3));
}