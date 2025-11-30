#include <stdio.h>

int if_insert_pos(int arr[], int size, int n);

int main(){
    int tab[50];
    int i,size,n,pos;
    printf("entrer la taille de tableau :\n");
    scanf("%d",size);  
    printf("entrer les elets de tab trie croissenement :\n");
    for(i=0;i<size;i++){
        printf("tab[%d]=",i);
        scanf("%d",&tab[i]);   
        
    }

    printf("Entrer un nombre :\n ");
    scanf("%d", &n);  
    pos = if_insert_pos(tab,size,n);
    printf("La position de %d est : %d\n", n, pos);

    return 0;    
}

int if_insert_pos(int arr[], int size, int n) {
    int i;
    for (i=0;i<size;i++) {  
        if (n < arr[i]) {    
            return i;   
        }
    }
    return size;  
}

