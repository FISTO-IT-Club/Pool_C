#include<stdio.h>
int f_ispowerof2(int x){
	if(x<=0){
		return 0;
	}
	return (x & (x-1)) ==0;
}

int main(){
	int x;
	printf("Entrer un entier : ");
	scanf("%d", &x);
	
	int resultat = f_ispowerof2(x);
	if (resultat){
		printf("%d est une puissance exacte de 2.\n",x);
	}else{
		printf("%d n'est pas une puissance exacte de 2.\n",x);
	}
}
