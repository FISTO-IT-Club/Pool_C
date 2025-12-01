#include<stdio.h>
int main(void)
{
    int tab[100];
    int n, target;
    int i, j;
    int found = 0;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    printf("Entrez les %d entiers : \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    printf("Entrez la valeur cible : ");
    scanf("%d", &target);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (tab[i] + tab[j] == target)
            {
                printf("Indices = [%d, %d]\n", i + 1, j + 1);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        printf("Aucune paire trouvée.\n");
    return 0;
}
