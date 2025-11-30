#include <stdio.h>

long long fib_tail(int n, long long a, long long b) {

    if (n == 0) {
        return a;
    }
    else {
        return fib_tail(n-1, b, b+a);
    }
}

int main(){
    int number, x=0, y=1, resultat;

    printf("tapez un nombre : ");
    scanf("%d", &number);

    resultat = fib_tail(number, x, y);
    printf("le resultat est : %d", resultat);
}