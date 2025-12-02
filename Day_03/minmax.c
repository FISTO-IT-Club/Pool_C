#include <stdlib.h>
#include <stdio.h>

#define len 5

int i ;

int min_max(int arr[len], int *min, int *max) {
    *min=arr[0] ;
    *max=arr[0] ;
    for(i=0; i<len; i++) {
        if(*min>arr[i]) *min=arr[i] ;
        if(*max<arr[i]) *max=arr[i] ;
    } 
    return 0 ;
}        


int main() {
    int min, max ;
    int arr[len]={1, 22, 6, 41, 9} ;

     min_max(arr, &min, &max) ;
     printf("le minimum est: %d\n", min) ;
     printf("le maximum est: %d\n", max) ;

     return 0 ;
}

