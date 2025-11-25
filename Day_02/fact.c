#include <stdio.h>

int factorial(int number) {
    if (number == 0 || number == 1)
        return 1; 

    if (number < 0)
        return 0;
    return number * factorial(number - 1);
}

int main() {
    int num = 4;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
