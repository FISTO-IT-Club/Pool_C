#include<stdio.h>
int main(void)
{
    int tab[5];
    int i;
    printf("Entrez 5 entiers : \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &tab[i]);
    }

    printf("Affichage à l'envers : \n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}
