#include <stdio.h>
void calcul(void) 
{
    char op;
    float a, b, resultas;
    printf("Entrez une operation (+, -, *, /):");
    scanf(" %c", &op);
    printf("Entrez deux nombres :\n");
    scanf("%f\n %f", &a, &b);
 switch (op) {
        case '+':
            resultas = a + b;
            printf("Resultas : %.2f\n", resultas);
            break;
        case '-':
            resultas = a - b;
            printf("Resultas : %.2f\n", resultas);
            break;
        case '*':
            resultas = a * b;
            printf("Resultas : %.2f\n", resultas);
            break;
        case '/':
            if (b != 0) {
                resultas = a / b;
                printf("Resultas : %.2f\n", resultas);
            } else {
                printf("Erreur : Division par zero n'existe pas\n");
            }
            break;
        default:
            printf("Operation non valide !\n");
	}
}
int main() 
{
    calcul();
    return 0;
}