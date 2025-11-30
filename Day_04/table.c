#include <stdio.h>

void f_tableau_multi(int n){
    int i;

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n *i);
    }
}
int main() {
    f_tableau_multi(5);
    return 0;
}