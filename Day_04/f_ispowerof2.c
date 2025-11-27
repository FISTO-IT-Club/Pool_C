#include <stdio.h>
int puiss2(int a) {
    if (a<=0)return 0;
    while (a%2==0) a/=2;
    return a==1;
}
int main() {
    int a;
    printf("saisir un entier: \n");
    scanf("%d", &a);
    if (puiss2(a)) printf("%d est une puissance de 2\n", a);
    else printf("%d n est pas une puissance de 2\n", a);
    return 0;
}
