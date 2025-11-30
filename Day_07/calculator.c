#include <stdio.h>
#include <stdlib.h>
#define capacite 20
// hhhhh ma3leksh a si ilyas, by Ali (shuf l end)
/*waaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa3 */

typedef struct {
    char expression[100];
    double s;
} h0;

h0 histori[capacite];
int history_count= 0;


void my_strcpy(char*dest, const char* src) {
    int i = 0;
    while (src[i]!= '\0') {
        dest[i] =src[i];
        i++;
    }
    dest[i] ='\0';
}

double my_sqrt(double n) {
    if (n<0) return -1;
    if (n==0) return 0;

    double x= n;
    double y= 1;
    double epsilon= 0.00001;

    while (x -y> epsilon) {
        x = (x+y)/2;
        y= n/x;
    }
    return x;
}

double my_pow(double base, int exp) {
    double s =1;
    int i;
    for (i=0;i<exp;i++) {
        s *=base;
    }
    return s;
}

void add_to_history(const char*expr, double s) {
    if (history_count<capacite) {
        my_strcpy(histori[history_count].expression, expr);
        histori[history_count].s= s;
        history_count++;
    } else {
        int i;
        for (i=0;i<capacite-1;i++) {
            histori[i]= histori[i+1];
        }
        my_strcpy(histori[capacite-1].expression,expr);
        histori[capacite-1].s =s;
    }
}

void show_history() {
    if (history_count== 0) {
        printf("\naucun historique cera sevgarder!\n");
        return;
    }
    printf("\n=== <.Historique des Calculs.> ===\n");
    int i;
    for (i=0;i< history_count;i++) {
        printf("%d. %s = %.4f\n", i+1, histori[i].expression, histori[i].s);
    }
    printf("============================================================================================================================================================\n");
}

double factorial(int n) {
    if (n<0)
        return -1;
    if (n==0 || n==1)
        return 1;
    double s= 1;
    int i;
    for (i=2;i<=n;i++) {
        s*=i;
    }
    return s;
}

double calculate_basic(double a, char op, double b) {
    switch(op) {
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/':
            if (b==0) {
                printf("bruh: On ne peut pas diviser par 0!!!\n");
                return 0;
            }
            return a / b;
        default:
            printf("Erreur de programe!\n");
            printf("Veiller essaier plus tard.\n");
            return 0;
    }
}

void basic_mode() {
    double num1, num2, s;
    char op;
    char expression[100];
    printf("\nEntrez votre calcule: ");
    if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
        printf("Format d'entrée incorect!!!!\n");
        printf("Respecter les formats poser ;/ \n");
        printf("Essaier d'ecrice come  7 + 6 pour verifier est ce qu'il marche bien le code.");
        while(getchar() != '\n');
        return;
    }
    s = calculate_basic(num1, op, num2);
    sprintf(expression, "%.2f %c %.2f", num1, op, num2);

    printf("Résultat: %.4f\n", s);
    add_to_history(expression,s);
}

void advanced_mode() {
    int choice;
    double num, s;
    char expression[100];
    printf("\n=== (0)-(0) <Operations Secander> (0)-(0) ===\n");
    printf("1. Factorielle (fact)\n");
    printf("2. Racine carree (sqrt)\n");
    printf("3. Puissance par 2 (pwr(2))\n");
    printf("4. Puissance par 3 (pwr(3))\n");
    if (scanf("%d", &choice) != 1) {
        printf("Entrée invalide!\n");printf("Format d'entrée incorect!!!!\n");
        printf("Respecter les formats poser ;/ \n");
        while(getchar()!= '\n');
        return;
    }
    printf("Entrez le nombre: ");
    if (scanf("%lf", &num) !=1) {
        printf("Format d'entrée incorect!!!!\n");
        printf("Respecter les formats poser ;/ \n");
        while(getchar()!= '\n');
        return;
    }
    switch(choice) {
        case 1:
            if (num<0 || num!=(int)num) {
                printf("Il faut que le factoriel doit etre positive et entier!\n");
                return;
            }
            s =factorial((int)num);
            sprintf(expression, "fact(%.0f)", num);
            break;
        case 2:
            if (num<0) {
                printf("Erreur: Impossible de calculer la racine carrée d'un nombre negatif!\n");
                return;
            }
            s=my_sqrt(num);
            sprintf(expression, "sqrt(%.2f)", num);
            break;
        case 3:
            s=my_pow(num, 2);
            sprintf(expression, "pwr(2)(%.2f)", num);
            break;
        case 4:
            s=my_pow(num, 3);
            sprintf(expression, "pwr(3)(%.2f)", num);
            break;
        default:
            printf("Format d'entrée incorect!!!!\n");
            printf("Respecter les formats poser ;/ \n");
            return;
    }
    printf("Résultat: %.4f\n", s);
    add_to_history(expression, s);
}

int main() {
    int choice;
    while(1) {
        printf("\n=== //.<Menu Principal>.\\ ===\n");
        printf("1. Operations de base (+, -, *, /)\n");
        printf("2. Operations secander (fact, sqrt, pwr)\n");
        printf("3. Afficher l'historique\n");
        printf("4. Effacer l'historique\n");
        printf("5. Quitter\n");
        printf("Selectionnez une option (1-5): ");
        if (scanf("%d", &choice) != 1) {
            printf("Entrée invalide! Veuillez entrer un nombre.\n");
            while(getchar() != '\n');
            continue;
        }
        switch(choice) {
            case 1:
                basic_mode();
                break;
            case 2:
                advanced_mode();
                break;
            case 3:
                show_history();
                break;
            case 4:
                history_count = 0;
                printf("xdddddddddddddddddddddddddddddddddddddddd\n");
                printf("\nHistorique effacee!\n");
                break;
            case 5:
                printf("\nMerci d'utiliser mon Calculatrice :)\n");
                printf("============================================================================================================================================================\n");
                return 0;
            default:
                printf("Veuillez sélectionner 1-5.\n");
        }
    }
// WORK HRBAAAAAAAAAN tbrkllah 3lik.

    return 0;
}
