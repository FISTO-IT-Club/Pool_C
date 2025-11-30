#include<stdio.h>
int is_power_of_3(int n)
{
    if (n < 1)
        return 0;  

    while (n % 3 == 0)
        n = n / 3;

    return (n == 1); 
}
int main(void)
{
    int x;
    printf("Entrer un nombre : ");
    scanf("%d", &x);

    if (is_power_of_3(x))
        printf("%d est une puissance de 3\n", x);
    else
        printf("%d n'est pas une puissance de 3\n", x);

    return 0;
}
