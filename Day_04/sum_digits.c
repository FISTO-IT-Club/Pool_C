#include <stdio.h>

int sum_digits(int n) {
    int i;
     
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return n + sum_digits(n-1);
    }
}

int main(){
    int number, sum;

    printf("tapez la valeur de le nombre : ");
    scanf("%d", &number);

    sum = sum_digits(number);
    printf("le resultats de la somme digitale est : %d", sum);
}