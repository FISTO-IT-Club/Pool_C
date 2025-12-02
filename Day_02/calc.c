#include <stdio.h>

float a, b ;
char op ;

void calc(void) {
    switch(op){
        case '+' : printf("a+b=%f", a+b) ;
                   break ;
        case '-' : printf("a-b=%f", a-b) ;
                   break ;
        case '*' : printf("a*b=%f", a*b) ;
                   break ;
        case '/' : { if (b!=0)
                        printf("a/b=%f", a/b) ;
                     else 
                        printf("la division par 0 est impossible") ; }
                   break ;
        default: printf("l'opération est incorrecte") ;
                 break ;                  
        }
}

int main() {
    printf("saisir une opérations:\n") ;
    scanf(" %c", &op) ;
    printf("saisir le 1ere valeur") ;
    scanf("%f", &a) ;
    printf("saisir le 1ere valeur") ;
    scanf("%f", &b) ;  
    calc() ; 
    return 0 ;
}




