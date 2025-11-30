#include <stdio.h>
int factorial ( int nb ) {
    int result;
if ( nb == 0 || nb == 1 ) {
     result = 1 ;
} else {
    for ( int i = 1 ; i <= nb ; i++ ) {
        result *= i ;
    }
}
printf ( " le factoriel de %d est : %d" , nb , result ) ;
}
int main () {
    int n;
    printf ( " entrez un nombre : " ) ;
    scanf ( " %d ", &n ) ;
    factorial ( n ) ;
}