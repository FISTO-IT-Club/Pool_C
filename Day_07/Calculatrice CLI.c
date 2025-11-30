#include <stdio.h>
#define SIZE 7

void add_history(double a, double b, char op, double result,
                    double numbers1[], double numbers2[],
                    char ops[], double results[],
                    int *history_index)
{
    if (*history_index < SIZE) {
        int i = *history_index;
        numbers1[i] = a;
        numbers2[i] = b;
        ops[i] = op;
        results[i] = result;
        (*history_index)++;
    } 
}

void show_history(double numbers1[], double numbers2[], char ops[],
                  double results[], int history_index)
{
    if (history_index == 0) {
        printf("Il n y a pas de histarique pour l’instant \n");
        return;
    }

    printf("\n--- Historique ---\n");int i;
    for (i = 0; i < history_index; i++) {
        printf("%d: %f %c %f = %f\n",i+1,numbers1[i],ops[i],numbers2[i],results[i]);
    }
    printf("----------------------\n");
}
double pwr3(double x){
    return x*x*x;
}
double pwr2(double x){
    return x*x;
}


int main()
{
    double numbers1[SIZE];
    double numbers2[SIZE];
    char ops[SIZE];
    double results[SIZE];
    int history_index=0;
    while(1){
        int choie;
        printf("Choisissez le numero correspondant a l operation que vous souhaitez effectuer:\n");
        printf("1 - la somme \n");
        printf("2 - la soustraction\n");
        printf("3 - multiplication\n");
        printf("4 - division\n");
        printf("5 - afficher l histoire \n");
        printf("6 - quitter\n");
        printf("7-calculer la puissance a 2\n");
        printf("8-calculer la puissance a 3\n");
        scanf("%d", &choie);
		 double x ; 
		 char oppow='*';
		  double respow;
         if(choie == 7)
         {printf("enter un nombre \n");
		 scanf("%lf", &x);
         respow=pwr2(x);
         printf(" voici le carre %f: ",respow);
          add_history(x,x,oppow,respow, numbers1, numbers2, ops, results, &history_index);
          printf("rechoisir une operation\n");
          scanf("%d", &choie);
          while(1){
          if (choie==7){
          	printf("enter un nombre \n");
		    scanf("%lf", &x);
            respow= pwr2(x);
            printf(" voici le carre: %f",respow);
            add_history(x,x,oppow,respow, numbers1, numbers2, ops, results, &history_index);
            printf("rechoisir une operation\n");
            scanf("%d", &choie);}
			 else{break;
			 }
		}
		 }
		  if(choie==8)
         {printf("enter un nombre \n");
		 scanf("%lf", &x);
         respow= pwr3(x);
         printf(" voici le cube %f: ",respow);
         add_history(x,x,oppow,respow, numbers1, numbers2, ops, results, &history_index);
          printf("rechoisir une operation\n");
          scanf("%d", &choie);
          while(1){
          if (choie==8){
          	printf("enter un nombre \n");
		    scanf("%lf", &x);
            respow= pwr3(x);
            printf(" voici le cube: %f",respow);
            add_history(x,x,oppow,respow, numbers1, numbers2, ops, results, &history_index);
            printf("rechoisir une operation\n");
            scanf("%d", &choie);}
			 else{break;
			 }
		}
		 }
        if (choie == 6) break;
        if (choie == 5) {
            show_history(numbers1, numbers2, ops, results, history_index);
            printf("rechoisir une operation\n");
            scanf("%d", &choie);
             while (1){
             if (choie==5){show_history(numbers1, numbers2, ops, results, history_index);
            printf("rechoisir une operation\n");
            scanf("%d", &choie);
			 }
			 else{break;
			 }}
        }
        double a, b, r;
        char op;

        printf("entrer le premier nombre ");
        scanf("%lf", &a);
        printf("entrer le deuxieme  ");
        scanf("%lf", &b);

        switch (choie) {
            case 1: op = '+'; r=a+b;break;
            case 2: op = '-'; r=a-b;break;
            case 3: op = '*'; r=a*b;break;
            case 4: op = '/'; 
                    if (b == 0) {
                        printf("la division sur 0 est impossible \n");
                    }
                    r=a/b;
                    break;
            default:
                printf("choie invalide \n");
        }

        printf("le resultat: %f\n", r);

        add_history(a, b, op, r, numbers1, numbers2, ops, results, &history_index);
    }
    return 0;
}

