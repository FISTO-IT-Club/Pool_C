#include <stdio.h>

int sum_digits(int n){
    int i;
    int sum = 0;

    for (i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}


int main() {
    int n = 10;
    printf("Sum from 0 to %d is: %d", n, sum_digits(n));
    return 0;
}