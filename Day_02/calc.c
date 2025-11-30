#include<stdio.h>
void calc(void) {
    char op;
    float nb1, nb2, resultat;

    printf("Choisissez une opération +, -, *, / : ");
    scanf("%c",&op);

    printf("donner le 1 nombre : ");
    scanf("%f",&nb1);

    printf("donner le 2 nombre : ");
    scanf("%f",&nb2);

    switch(op){
        case '+':
            resultat = nb1 + nb2;
            printf("Le résultat de %f + %f = %f\n", nb1, nb2, resultat);
            break;
        case '-':
            resultat = nb1 - nb2;
            printf("Le résultat de %f - %f = %f\n", nb1, nb2, resultat);
            break;
        case '*':
            resultat = nb1 * nb2;
            printf("Le résultat de %f * %f = %f\n", nb1, nb2, resultat);
            break;
        case '/':
            if(nb2 != 0){
                resultat = nb1 / nb2;
                printf("Le résultat de %f / %f = %.2f\n", nb1, nb2, resultat);
            } else {
                printf("Erreur");
            }
            break;
        default:
            printf("Opération invalide");
    }
}
//test
int main() {
    calc();
    return 0;
}