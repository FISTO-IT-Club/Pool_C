#include<stdio.h>
#include<string.h>
#include<math.h>
#define HISTO 5

char historique[HISTO][50];
int index_h = 0;
void ajouter_historique(const char* entree) {
    strncpy(historique[index_h], entree, 49);
    historique[index_h][49] = '\0';
    index_h = (index_h + 1) % HISTO;
}
void afficher_historique() {
    printf("\n Historique des %d dernières opérations \n", HISTO);
    for(int i = 0; i < HISTO; i++) {
        int idx = (index_h + i) % HISTO;
        if(strlen(historique[idx]) > 0)
            printf("%s\n", historique[idx]);
    }
}
long long factorielle(int n) {
    if(n < 0) return -1;
    long long f = 1;
    for(int i = 1; i <= n; i++) f *= i;
    return f;
}
int main() {
    char op[20];
    double a, b, res;
    char entree[50];
    for(int i = 0; i < HISTO; i++) historique[i][0] = '\0';
    printf("Calculatrice CLI (taper 'exit' pour quitter, 'history' pour historique)\n");

    while(1) {
        printf("\nOpération (+, -, *, /, factorial, sqrt, pow2, pow3) : ");
        scanf("%s", op);

        if(strcmp(op, "exit") == 0) break;
        if(strcmp(op, "history") == 0) {
            afficher_historique();
            continue;
        }
        if(strcmp(op, "factorial") == 0) {
            int n;
            printf("Entrez un entier : ");
            scanf("%d", &n);
            long long f = factorielle(n);
            if(f == -1) printf("Erreur : négatif\n");
            else {
                printf("Résultat : %lld\n", f);
                sprintf(entree, "factorial(%d) = %lld", n, f);
                ajouter_historique(entree);
            }
        }
        else if(strcmp(op, "sqrt") == 0) {
            printf("Entrez un nombre : ");
            scanf("%lf", &a);
            if(a < 0) printf("Erreur : négatif\n");
            else {
                res = sqrt(a);
                printf("Résultat : %.2lf\n", res);
                sprintf(entree, "sqrt(%.2lf) = %.2lf", a, res);
                ajouter_historique(entree);
            }
        }
        else if(strcmp(op, "pow2") == 0) {
            printf("Entrez un nombre : ");
            scanf("%lf", &a);
            res = a*a;
            printf("Résultat : %.2lf\n", res);
            sprintf(entree, "pow2(%.2lf) = %.2lf", a, res);
            ajouter_historique(entree);
        }
        else if(strcmp(op, "pow3") == 0) {
            printf("Entrez un nombre : ");
            scanf("%lf", &a);
            res = a*a*a;
            printf("Résultat : %.2lf\n", res);
            sprintf(entree, "pow3(%.2lf) = %.2lf", a, res);
            ajouter_historique(entree);
        }
        else { // opérations de base
            printf("Entrez le premier nombre : ");
            scanf("%lf", &a);
            printf("Entrez le deuxième nombre : ");
            scanf("%lf", &b);

            if(strcmp(op, "+") == 0) res = a + b;
            else if(strcmp(op, "-") == 0) res = a - b;
            else if(strcmp(op, "*") == 0) res = a * b;
            else if(strcmp(op, "/") == 0) {
                if(b == 0) { printf("Erreur : division par zéro\n"); continue; }
                res = a / b;
            }
            else { printf("Opération inconnue\n"); continue; }

            printf("Résultat : %.2lf\n", res);
            sprintf(entree, "%.2lf %s %.2lf = %.2lf", a, op, b, res);
            ajouter_historique(entree);
        }
    }
    return 0;
}
