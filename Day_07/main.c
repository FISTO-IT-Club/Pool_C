#include<stdio.h>
#include"calculator.h"
#include"history.h"

int main(){
	int choice;
	double a,b,result;
	char history[5][50];
	int count = 0;
	
	do{ 
	printf("\n---MENU CALCULATRICE---\n");
	printf("1)Addition\n2)Soustraction\n3)Multiplication\n4)Division\n5)afficher l'historique\n");
	printf("6)factorial\n7)la racine caree\n8)puissance 2\n9)puissance 3\n0)Quitter\n");	
	printf("choix : ");
	scanf("%d",&choice);
	
	char entry[50];
	
	switch(choice){
		case 1:
			printf("Enter a et b :");
			scanf("%lf %lf",&a,&b);
			result = addition(a,b);
			printf("=%lf\n",result);
			sprintf(entry,"%.2f + %.2f = %.2f",a,b,result);
			add_to_history(history,entry,&count);
			break;
		case 2:
			printf("Enter a et b :");
			scanf("%lf %lf",&a,&b);
			result = soustraction(a,b);
			printf("=%.2lf\n",result);
			sprintf(entry,"%.2f - %.2f = %.2f",a,b,result);
			add_to_history(history,entry,&count);
			break;
		case 3:
			printf("Enter a et b :");
			scanf("%lf %lf",&a,&b);
			result = multiplication(a,b);
			printf("=%.2lf\n",result);
			sprintf(entry,"%.2f * %.2f = %.2f",a,b,result);
			add_to_history(history,entry,&count);
			break;
		case 4:
			printf("Enter a et b :");
			scanf("%lf %lf",&a,&b);
			if(b==0){
				printf("Erreur: division par zero !\n");
			}else{
			result =division(a,b);
			printf("=%.2lf\n",result);
			sprintf(entry,"%.2f / %.2f = %.2f",a,b,result);
			add_to_history(history,entry,&count);}
			break;
		case 6:
			printf("Enter un entier :");
			scanf("%lf",&a);
			result = factorial(a);
			printf("=%.0lf\n",result);
			sprintf(entry," fact(%d) = %.0lf",(int)a,result);
			add_to_history(history,entry,&count);
			break;
		case 7:
			printf("Enter un entier :");
			scanf("%lf",&a);
			result = racine(a);
			printf("=%.2lf\n",result);
			sprintf(entry," sqrt(%.2lf) = %.2lf",a,result);
			add_to_history(history,entry,&count);
			break;
		case 8:
			printf("Enter un entier :");
			scanf("%lf",&a);
			result = puissance2(a);
			printf("=%.2lf\n",result);
			sprintf(entry," pwr2(%.2lf) = %.2lf",a,result);
			add_to_history(history,entry,&count);
			break;
		case 9:
			printf("Enter un entier :");
			scanf("%lf",&a);
			result = puissance3(a);
			printf("=%.2lf\n",result);
			sprintf(entry," pwr3(%.2lf) = %.2lf",a,result);
			add_to_history(history,entry,&count);
			break;
		case 5:
			afficher_history(history,count);
			break;
		case 0:
			printf("Au revoir !\n");
			break;
		default:
			printf("choix invalide.\n");
     	}		
	}while (choice != 0);
	
	return 0;	
	}

