#include <stdio.h>

void f_tableau_multi(int n) {
    int i, res;

    for (i=0; i<=10; i++) {
        if (n == 0) {
            printf("%d * 0 = 0\n", n);
        }
        else {
            res = n * i;
            printf("%d * %d = %d\n", n, i, res);
        }
    }
}

int main(){
    int number;
    
    printf("tapez la vleur de le nombre : ");
    scanf("%d", &number);
    f_tableau_multi(number);
}