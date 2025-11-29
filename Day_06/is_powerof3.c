#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_powerof3(int n) {
    if (n<= 0) 
        return false;
    else;
        while (n%3== 0) {
            n/=3;
        }
    return n== 1;
}

int main() {
    int n;
    printf("Entrez votre nombre: ");
    scanf("%d", &n);
    int s;
    s = is_powerof3(n);
    printf("%d %d une puissance de 3.\n",n,s ?"est" : "n'est PAS");
    /*exite(0);*/
    return 0;
}