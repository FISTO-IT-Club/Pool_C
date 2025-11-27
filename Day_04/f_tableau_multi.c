#include <stdio.h>
void f_tableau_multi(int n) {for (int i = 0; i <= 10; i++) printf("%d * %d = %d\n", n, i, n * i);}
int main() {
    int n;
    printf("saisir un entier: \n");
    scanf("%d", &n);
    printf("Table de multiplication de %d:\n",n);
    f_tableau_multi(n);
    return 0;
}