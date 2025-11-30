#include <stdio.h>

float calculator(float a, float b) {
    char op, reponse ;
    float result ;
    int i, f1=1, f2=1 ;

    do{
        printf("saisir une opération (+, -, *, /, pwr(2), pwr(3), fact):") ;
        scanf(" %c", &op) ;

        switch(op){
                case '+': result=a+b; break;
                case '-': result=a-b; break;
                case '*': result=a*b; break;

                case '/': if(b==0) {printf("impossible de diviser par 0") ; continue ;}
                          else result=a/b; break;

                case 'pwr(2)': result=a*a; result=b*b; break;
                case 'pwr(3)': result=a*a*a; result=b*b*b; break;

                case 'fact': for(i=1; i<=a; i++){f1=f1*i;} result=f1;
                             for(i=1; i<=b; i++){f2=f2*i;} result=f2;
                             break;
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

