#include<stdio.h>
void f_tableau_multi(int n){
	int i;
	printf("Tableau de Multiplication de %d \n",n);
	for( i=0; i<=10; i++){
		printf("%d * %d = %d\n", i, n, i*n);
	}
}

int main(){
	int n;
	printf("Entrer un nombre entier : ");
	scanf("%d", &n);
	f_tableau_multi(n);
	return 0;
}
