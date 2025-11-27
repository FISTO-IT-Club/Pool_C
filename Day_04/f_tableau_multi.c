#include <stdio.h>

void f_tableau_multi(int n)
{
    int i;
    
    i = 0;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}

int main(void)
{
    f_tableau_multi(5);
    return 0;
}