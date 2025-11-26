#include <stdio.h>
int removeInt(int tab[], int taille, int val) {
    int a=0;
    for (int i = 0; i < taille; i++) 
        if (tab[i]!= val) {
            tab[a]= tab[i];
            a++;
        };
    return a;
}
int main() {
    int tab[] = {12, 32, 2, 95, 79, 65, 99};
    int taille = sizeof(tab) / sizeof(tab[0]);
    printf("Saisir une valeur:\n");
    int val;
    scanf("%d",&val);
    int taille2 = removeInt(tab, taille, val);
    printf("nouveau tableau:\n ");
    for (int i = 0; i < taille2; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}
