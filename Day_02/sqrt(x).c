#include<stdio.h>
int sqrt_x(int nb){
	if(nb<0){
		return -1;
	}else if (nb==0 || nb==1){
		return nb;
	}
	
	int i=1;
	while(i*i<=nb){
		i++;
	}
	return i-1;
}

int main(){
	int nb ;
	printf("Entrer un nombre :");
	scanf("%d",&nb);
	
	int resultat = sqrt_x(nb);
	if(resultat ==-1){
		printf("Erreur : Le nombre doit etre positif! \n");
	}else{
		printf("Le racine carree de %d arrondie a L'entier inferieur est :%d",nb , resultat);
	}
	return 0;
}
