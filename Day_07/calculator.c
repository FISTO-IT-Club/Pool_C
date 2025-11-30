#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX_HISTORY 100
char history[MAX_HISTORY][100];
int history_count = 0;
 
void save_history(const char * entry){
    if(history_count < MAX_HISTORY){
        strcpy(history[history_count], entry);
        history_count++;
    }else{
        for(int i=1; i< MAX_HISTORY; i++){
            strcpy(history[i-1], history[i]);
        }
        strcpy(history[MAX_HISTORY -1], entry);
    }
}
void show_history(){
    printf("Calculation History:\n");
    for(int i=0; i< history_count; i++){
        printf("%d: %s\n", i+1, history[i]);
    }
}
//calc base
void calc(void) {
    int a, b;
    char op;
    char entry[100];
    printf("Entrer le premier nombre, et le deuxieme nombre: ");
    scanf("%d %d", &a, &b);
    printf("Entrer l'operateur (+, -, *, /): ");
    scanf(" %c", &op);
     switch(op) {
        case '+':
            printf("Resultat: %d\n", a + b);
            break;
        case '-':
            printf("Resultat: %d\n", a - b);
            break;
        case '*':
            printf("Resultat: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Resultat: %d\n", a / b);
            } else {
                printf("Erreur: Division par zero!\n");
            }
            break;
        default:
            printf("Operateur invalide!\n");
            break;
    }
    sprintf(entry, "%d %c %d", a, op, b);
    save_history(entry);
}
void fact(int nb) {
    char entry[100];
        printf("Entrer un nombre :");
        scanf("%d", &nb);
        for (int i = 1; i <= nb; i++) {
            nb = nb * i;
            printf(" factoriel est : %d\n", nb);
        }
        sprintf(entry, "factoriel de %d", nb);
        save_history(entry);
    } 
    //sqrt
    int sqrt_x(int nb) {
 int i;
 for( i = 0; i <= nb ; i++) {
     if (i * i == nb) 
         return i;
     }
     return i - 1;   
}
void calc_sqrt() {
    int nb;
    char entry[100];
    printf("Entrer un nombre: ");
    scanf("%d", &nb);
    int result = sqrt_x(nb);
    printf("La racine carree de %d est %d\n", nb, result);
    sprintf(entry, "sqrt(%d) = %d", nb, result);
    save_history(entry);
}
//power of2
void calc_power2() {
    int n;
    char entry[100];
    printf("Entrer un nombre: ");
    scanf("%d", &n);
    int result = n * n;
    printf("Le carre de %d est %d\n", n, result);
    sprintf(entry, "%d^2 = %d", n, result);
    save_history(entry);
}
//power of3
void calc_power3() {
    int n;
    char entry[100];
    printf("Entrer un nombre: ");
    scanf("%d", &n);
    int result = n * n * n;
    printf("Le cube de %d est %d\n", n, result);
    sprintf(entry, "%d^3 = %d", n, result);
    save_history(entry);
}
int main() {
    int choice;
    int n;
    while(1) {
        printf("Menu:\n");
        printf("1. Calculatrice de base(+-*/)\n");
        printf("2. Factoriel\n");
        printf("3. Racine carree\n");
        printf("4. Carre d'un nombre\n");
        printf("5. Cube d'un nombre\n");
        printf("6. Afficher l'historique des calculs\n");
        printf("7. Quitter\n");
        printf("Choisir une option: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                calc();
                break;
            case 2:
                fact(n);
                break;
            case 3:
                calc_sqrt();
                break;
            case 4:
                calc_power2();
                break;
            case 5:
                calc_power3();
                break;
            case 6:
                show_history();
                break;
            case 7:
                return 0;
            default:
                printf("Option invalide! Veuillez reessayer.\n");
        }
    }
    return 0;
}
