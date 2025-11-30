#include<stdio.h>
long long fib_tail(int n, long long a, long long b){
    a = 0;
    b = 1;
    for(int i = 0; i < n; i++){
        long long temp = a + b;
        a = b;
        b = temp ;
    }
    return a;
}
int main() {
    int n;
    printf("Entrer un entier:");
    scanf("%d", &n);
    long long result = fib_tail(n, 0, 1);
    printf("%lld", result);
    return 0;
}
