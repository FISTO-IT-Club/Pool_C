#include <stdio.h>
#include <stdbool.h>

bool is_powerof3(int n) {
    while(n>1){
        if(n%3 != 0) return false ;
        n=n/3 ;
    }
    return true ;
}


int main() {
    int n ;
    printf("saisir un entier:") ;
    scanf("%d", &n) ;
    printf("%d", is_powerof3(n)) ;
}
