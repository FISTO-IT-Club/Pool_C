#include <stdio.h>

void f_tableau_multi(int n) {
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    f_tableau_multi(number);
    return 0;
}
