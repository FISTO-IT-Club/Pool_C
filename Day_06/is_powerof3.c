#include <stdio.h>
int is_powerof3(int n) {
    if (n < 1)
        return 0;
    while (n % 3 == 0) {
        n = n / 3;
    }
    return n == 1;
}
int main() {
    int n;
    printf("Entrer un nombre: ");
    scanf("%d", &n);
    if (is_powerof3(n))
        printf("%d est une puissance de 3\n", n);
    else
        printf("%d n'est pas une puissance de 3\n", n);
    return 0;
}