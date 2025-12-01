#include <stdio.h>
void f_tableau_multi(int n)
{
    int i = 0;

    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}
