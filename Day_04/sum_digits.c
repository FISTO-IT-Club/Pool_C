#include<stdio.h>
int sum_digits(int n) {
    int i;
    int sum = 0;
    for(i=0;i<=n;i++) {
        sum +=i;
    }
    return sum;
}
int main() {
    int n;
    printf("entrer la valeur de n: ");
    scanf("%d", &n);
    printf("la somme de 0 ра %d est: %d\n", n, sum_digits(n));
    return 0;
}
