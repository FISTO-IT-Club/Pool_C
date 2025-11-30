#include<stdio.h>
#include <stdbool.h>

bool is_powerof3(int n) {
    if (n < 1) return false;
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {
    int n = 26; 
    if (is_powerof3(n)) {
        printf("%d is a power of 3\n", n);
    } else {
        printf("%d is not a power of 3\n", n);
    }
    return 0;
}