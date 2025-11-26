#include <stdio.h>
int if_insert_pos(int tab[], int taille, int n) {
    for (int i=0; i < taille; i++) {
        if (tab[i] >= n) return i;
    }
    return taille;
}

int main(void){
    int tab[]={1,10,100,1000};
    int nb;
    printf("saisir un nombre:\n");
    scanf("%d",&nb);
    printf("%d",if_insert_pos(tab, 4, nb));
    return 0;
}