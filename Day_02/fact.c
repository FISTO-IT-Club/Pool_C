#include<stdio.h>
int factorial(int nb){
	if (nb==0 || nb==1){
		return 1;
	}
	else{
		return nb *factorial(nb-1);
	}
}

int main(){
	int nb ;
	
	printf("Entrer un nombre :");
	scanf("%d",&nb);
	
	if (nb<0){
		printf("Erreur : le nombre doit etre positif !\n");
	}else{
		printf("La factorielle de %d est : %d\n",nb , factorial(nb));
	}
}
