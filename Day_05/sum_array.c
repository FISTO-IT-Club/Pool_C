#include<stdio.h>
int main(void)
{
    int tab[5];
    int i, somme = 0;
    printf("Entrez 5 entiers : \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &tab[i]);
        somme += tab[i];
    }

    printf("La somme du tableau = %d\n", somme);

    return 0;
}
