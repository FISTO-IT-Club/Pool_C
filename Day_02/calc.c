#include<stdio.h>

void calc(void){
	char op;
	float a,b,R;
	printf("Entrer l\'operation (+,-,*,/):\n");
    scanf(" %c",&op);
	printf("Entrer deux nmbre reel a et b:\n");
	scanf("%f%f",&a,&b);
	switch(op){
		case '+':
			R = a+b;
		printf("la resultat est :%.2f\n",R);
		break;
		case '-':
			R = a-b;
		printf("la resultat est :%.2f\n",R);
		break;
		case '*':
			R = a*b;
		printf("la resultat est :%.2f\n",R);
		break;
		case '/':
			if(b==0){
		printf("Erreur: division par zero!\n");
	    }else{
	    	R = a/b;
		printf("la resultat est :%.2f\n",R);
     	}
		break;
	default:
		printf("Operation invalide !\n");
	}
}
int main(){
	char op ;
	float a,b;
	calc();
	return 0;
}
