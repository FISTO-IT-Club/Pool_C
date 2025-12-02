#include <stdio.h>

int f_ispowerof2(int x){
    int i, pow=0;
    while(x%2==0) {
        x=x/2 ;
        pow ++ ;
        if(x==1) break;
    }

    if(pow==1) printf("ce n'est pas un carré de 2") ;
    else printf("c'est un carré de 2") ; 
}

int main() {
    int x ;
    printf("sasir un entier:") ;
    scanf("%d", &x) ;
    f_ispowerof2(x) ;
}

