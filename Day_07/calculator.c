#include <stdio.h>

float calculator(float a, float b) {
    char op, reponse ;
    float result ;

    do{
        printf("saisir une opération (+, -, *, /):") ;
        scanf(" %c", &op) ;
        switch(op){
                case '+': result=a+b; break;
                case '-': result=a-b; break;
                case '*': result=a*b; break;
                case '/': if(b==0) {printf("impossible de diviser par 0") ; continue ;}
                         else result=a/b; break;
                } 
        printf("le resultat est: %f", result) ;

        printf("veut-tu faire un autre calcul? tapez O si oui, tapez N si non:") ;
        scanf(" %c", &reponse) ;

        if(reponse=='O'){
            printf("saisir 2 nouvelles valeurs:") ;
            scanf("%f%f", &a, &b) ;
        }
    }   
    while (reponse == 'O') ;
    
    return result ;
}

int main() {
    float a, b ;
    
    printf("saisir 2 valeurs à calculer:") ;
    scanf("%f%f", &a, &b) ;

    calculator(a, b) ;

    return 0 ;
}

