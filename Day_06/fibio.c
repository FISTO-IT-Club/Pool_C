#include <stdio.h>


long long fib_tail(int n, long long a, long long b)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fib_tail(n - 1, b, a + b);
}
int main() {
    int n ;
    printf("entrer un nombre :") ;
    scanf("%d" ,&n);
    long long result=fib_tail(n,0,1);
    printf("Fibonacci(%d)=%d/n" ,n,fib_tail(n,0,1)) ;
    return 0;
}