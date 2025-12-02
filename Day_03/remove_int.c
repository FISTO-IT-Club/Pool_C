#include <stdlib.h>
#include <stdio.h>


int i ;

void remove_int(int arr[], int size, int target) {
    int size_T=0 ;
    size=10 ;
    int T[size] ;

    for(i=0; i<size; i++){
        if(arr[i] != target){
            T[size_T]=arr[i] ;
            size_T++ ; }
    }
    
    printf("les nouveaux éléments du tableau:") ;
    for(i=0; i<size_T; i++)
        printf("%d\t", T[i]) ;
}


int main(){
    int target, size=10;
    printf("saisir le nombre à supprimer:\n") ;
    scanf("%d",&target) ;

    int arr[10]={6, 3, 84, 3, 14, 6, 71, 1, 6, 77} ;
    remove_int(arr, size, target) ;
}




