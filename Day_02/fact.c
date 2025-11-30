#include <stdio.h>

int factorial(int num) {
    if (num < 0)
        return 0;          
    if (num == 0 || num == 1)
        return 1;          

    return num * factorial(num - 1);
}

int main() {
    printf("%d",factorial(6));
    return 0;
}