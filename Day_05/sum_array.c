#include <stdio.h>
int main() {
    int tab[5]={1,2,3,4,5,6,7,8,9,10};
    int somme=0;
    for(int i=0; i<sizeof(tab);i++){
        somme+=tab[i];
    }
    printf("La somme des elements du tableau est : %d\n", somme);
    return 0;
}
