#include <stdio.h>


void f_tableau_multi(int n) {
    int i ;
    for(i=0; i<=10; i++){
        printf("%d * %d = %d\n", i, n, n*i) ;
    }
}

int main() {
    int n ;
    printf("saisir un entier:") ;
    scanf("%d", &n) ;
    f_tableau_multi(n) ;
    return 0 ;
}

