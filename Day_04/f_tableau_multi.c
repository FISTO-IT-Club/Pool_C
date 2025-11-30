#include <stdio.h>

void f_tableau_multi(int n)
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d*%d = %d\n", n, i, n * i);
    }
}

int main()
{
    int nombre;

    printf("Enter a number : ");
    scanf("%d", &nombre);

    f_tableau_multi(nombre);

    return 0;
}