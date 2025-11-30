#include <stdio.h>

void f_tableau_multi(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d \n", i, n, i*n);
    }
}

int main() {
    f_tableau_multi(10);
}