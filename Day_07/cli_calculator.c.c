#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX_HISTORY 5

double history[MAX_HISTORY];
int history_index=0;

void add(double a, double b){
	double result= a+b;
	history[history_index % MAX_HISTORY]= result;
	history_index++;
	printf("%.2f + %.2f = %.2f\n",a,b,result);
}

void sub(double a, double b){
	double result= a-b;
	history[history_index % MAX_HISTORY]= result;
	history_index++;
	printf("%.2f - %.2f = %.2f\n",a,b,result);
}

void mul(double a, double b){
	double result= a*b;
	history[history_index % MAX_HISTORY]=result;
	history_index++;
	printf("%.2f * %.2f = %.2f\n",a,b,result);
}

void div_(double a, double b){
	if(b==0){
		printf("Erreur : division par 0\n");
		return;
	}
	double result= a/b;
	history[history_index % MAX_HISTORY]= result;
	history_index++;
	printf("%.2f / %.2f = %.2f\n",a,b,result);
}

void fact(double a ){
	double result= 1;
	int i;
	for(i=1;i<=(int)a; i++){
		result *=i;
	}
	history[history_index % MAX_HISTORY]= result;
	history_index++;
	printf("fact( %.2f ) =  %.2f\n",a,result);
}

void sqrt_(double a){
	if(a<0){
		printf("Erreur : Racine carre d'un nombre negatif\n");
		return;
	}
	double result= sqrt(a);
	history[history_index % MAX_HISTORY]= result;
	history_index++;
	printf("sqrt( %.2f ) = %.2f\n",a,result);
}

void pwr2(double a ){
	double result= a*a;
	history[history_index % MAX_HISTORY]= result;
	history_index++;
	printf("( %.2f ) ^ 2 =  %.2f\n",a,result);
}

void pwr3(double a ){
	double result= a*a*a;
	history[history_index % MAX_HISTORY]= result;
	history_index++;
	printf("( %.2f ) ^ 3 =  %.2f\n",a,result);
}

void print_history(){
	printf("Historique des calculs :\n");
	int i;
	for(i=0; i<MAX_HISTORY;i++){
		int index= (history_index - 1 - i + MAX_HISTORY)% MAX_HISTORY;
		int i;
		if(history[index] != 0){
			printf("%.2f\n",history[index]);
		}
	}
}

int main(){
	char command[10];
	double a,b;
	
	while(1){
		printf("------------------------CALCULATRICE CLI------------------------\n");
		printf("1. Addition (+) \n");
		printf("2. Soustraction (-) \n");
		printf("3. Multiplication (*) \n");
		printf("4. Division (/) \n");
		printf("5. Factorielle (fact) \n");
		printf("6. Racine Carree (sqrt) \n");
		printf("7. Carre (pwr2) \n");
		printf("8. Cube (pwr3) \n");
		printf("9. Historique (history) \n");
		printf("10. Quitter (exit) \n");
		
		printf("Enter votre choix : ");
		scanf("%s",command);
		
		if(strcmp(command, "1")== 0 || strcmp(command,  "+") == 0){
			printf("Entrer un nombre : ");
			scanf("%lf",&a);
			printf("\nEntrer un nombre : ");
			scanf("%lf",&b);
			add(a,b);
		} else if (strcmp(command, "2")== 0 || strcmp(command,  "-") == 0){
			printf("Entrer un nombre : ");
			scanf("%lf",&a);
			printf("\nEntrer un nombre : ");
			scanf("%lf",&b);
			sub(a,b);
		} else if (strcmp(command, "3")== 0 || strcmp(command,  "*") == 0){
			printf("Entrer un nombre : ");
			scanf("%lf",&a);
			printf("\nEntrer un nombre : ");
			scanf("%lf",&b);
			mul(a,b);
		} else if (strcmp(command, "4")== 0 || strcmp(command,  "/") == 0){
			printf("Entrer un nombre : ");
			scanf("%lf",&a);
			printf("\nEntrer un nombre : ");
			scanf("%lf",&b);
			div_(a,b);
		} else if (strcmp(command, "5")== 0 || strcmp(command,  "fact") == 0){
			printf("Entrer un nombre : ");
			scanf("%lf",&a);
			fact(a);
		} else if (strcmp(command, "6")== 0 || strcmp(command,  "sqrt") == 0){
			printf("Entrer un nombre : ");
			scanf("%lf",&a);
			sqrt_(a);
		} else if (strcmp(command, "7")== 0 || strcmp(command,  "pwr2") == 0){
			printf("Entrer un nombre : ");
			scanf("%lf",&a);
			pwr2(a);
		} else if (strcmp(command, "8")== 0 || strcmp(command,  "pwr3") == 0){
			printf("Entrer un nombre : ");
			scanf("%lf",&a);
			pwr3(a);
		} else if (strcmp(command, "9")== 0 || strcmp(command,  "history") == 0){
			print_history();
		} else if (strcmp(command, "10")== 0 || strcmp(command,  "exit") == 0){
			break;
		}else {
			printf("Commande inconnue\n");
		}
	}
	return 0;
}

