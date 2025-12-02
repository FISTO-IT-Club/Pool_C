#include <stdio.h> 

int i ;

int if_insert_pos(int arr[], int size, int n) {
    int index=0 ;
    size=10 ;

    for(i=0; i<size; i++){
        if(arr[i]==n) {
            index=i ; 
            break ;}   
        else 
            do {
                index++ ;
                } 
            while (n > arr[i])  ;
    }

    return index ;
}


int main() {
    int n, size ; 
    int arr[10]={1, 2, 4, 5, 9} ;

    printf("saisir un nombre:") ;
    scanf("%d", &n) ;

    printf("son index est: %d", if_insert_pos(arr, size, n)) ;
}