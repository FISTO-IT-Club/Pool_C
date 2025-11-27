#include <stdio.h>

int f_tableau_multi(int n)
{
    int res = 1;
    for (int i = 1; i<= 10; i++) {
        res = n * i;
        printf("%d x %d = %d\n", n, i, res);
    }
    return 0;
}

int main(){
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    f_tableau_multi(n);
    return 0;
}