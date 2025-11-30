#include <stdio.h>

int f_ispowerofn(int x, int n) {

    if (x <= 0 || n <= 0) return 0;

    if (n == 1) return (x == 1);
    while (x > 1 && (x % n == 0)) {
        x = x / n;
    }

    return (x == 1);
}

int main() {
    int n = 3;
    int num1 = 27; 
    int num2 = 10;

    if (f_ispowerofn(num1, n)){
        printf("%d is a power of %d\n", num1, n); 
    }else{
        printf("%d is NOT a power of %d\n", num1, n);
    }
    if (f_ispowerofn(num2, n)){
        printf("%d is a power of %d\n", num1, n);
    }else
        printf("%d is NOT a power of %d", num2, n);

    return 0;
}