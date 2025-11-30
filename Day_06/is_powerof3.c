#include <stdio.h>
#include <stdbool.h>

bool f_ispowerof3(int x) {
    if (x <= 0) {
        return false ;
    }
    while (x % 3 == 0) {
        x = x / 3;
    }
    if (x == 1) {
        return true ;
    } else {
        return false ;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (f_ispowerof3(n)) {
        printf("%d is a power of 3", n);
    }else {
        printf("%d is not a power of 3", n);
    }

    return 0;
}