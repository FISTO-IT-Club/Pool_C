#include <stdio.h>

int sum_digits(int n) {
    if(n <= 0)
        return 0;
   long int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    printf("Sum of digits of 5 is %d \n",sum_digits(5));
}