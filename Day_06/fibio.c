#include<stdio.h>
int fib_tail(int n, int a, int b)
{
    if (n == 0)
        return a;
    return fib_tail(n - 1, b, a + b);
}

int main(void)
{
    int n;
    int x = 0;   
    int y = 1;  
    printf("Entrer n : ");
    scanf("%d", &n);
    int f = fib_tail(n, x, y);
    printf("F(%d) = %d\n", n, f);

    return 0;
}
