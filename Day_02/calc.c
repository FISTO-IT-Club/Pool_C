#include<stdio.h>
void calc(void){
	float n1,n2, result;
	char op ;
	
	printf("-------------------CALCULATRICE SIMPLE---------------------\n\n");	
	printf("Entrer l'operation ( + , - , * , / ):");
	scanf("%c",&op);
	printf("\n");
	
	
	printf("Entrer le premier nombre n1= ");
	scanf("%f", &n1);
	printf("\n");
	
	printf("Entrer le deuxieme nombre n2= ");
	scanf("%f", &n2);
	printf("\n");
	
	switch (op){
		case '+':
			result = n1 + n2;
			printf("%.2f + %.2f = %.2f \n",n1, n2, result);
			break;
		case '-':
			result = n1 - n2;
			printf("%.2f - %.2f = %.2f \n",n1, n2, result);
			break;
		case '*':
			result = n1 * n2;
			printf("%.2f * %.2f = %.2f \n",n1, n2, result);
			break;
		case '/':
			if(n2 != 0){
			result = n1 / n2;
			printf("%.2f / %.2f = %.2f \n",n1, n2, result);
			}else{
				printf("erreur : Division par zero! \n");
			}
			break;
		default :
			printf("Operation invalide !\n");
		}
	
}

int main (){
	//appele de la fonction calc()
	calc();
	return 0;
}
