#include <stdio.h>
#include <stdbool.h>

int sqrt_n(float n) {
   int i= 1;
    while (true) {
        if ((i*i) <= n && (i+1)*(i+1) > n) {
            return i;
        }
        i++;
    }
}

int main() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    printf("Square root of %f is %d", n, sqrt_n(n));
}