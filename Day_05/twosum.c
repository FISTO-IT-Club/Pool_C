#include <stdio.h>
void two_sum(int tab[], int taille, int target) {
    for (int i=0;i<taille;i++) {
        for (int j=i+1; j<taille;j++) 
            if (tab[i]+tab[j]==target) {
                printf("[%d,%d]\n", i, j);
                return;
            }; 
    }
    printf("ERROR\n");
}

int main() {
    int tab[] ={2,7,11,15};
    int taille=sizeof(tab)/sizeof(tab[0]);
    int target=22;
    two_sum(tab,taille, target);
    return 0;
}