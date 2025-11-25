#include <stdio.h>
int racine(int x) {
    int a = 0;
    while(a * a <= x) a++;
    return a-1;
}
int main() {
    int x;
    printf("saisir un nombre : \n");
    scanf("%d", &x);
    printf("√%d = %d\n", x, racine(x));
    return 0;
}
