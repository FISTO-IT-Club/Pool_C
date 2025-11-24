#include <stdio.h>

int factorial(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main (int argc, char *argv[]) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    if (result == -1) {
        printf("Error! Factorial of negative numbers is undefined.\n");
    } else {
        printf("Factorial of %d is %d\n", num, result);
    }
    return 0;
}