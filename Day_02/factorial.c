#include<stdio.h>
int factorial(int nb)
{
    int i=1, f = 1;
    while(i<=nb){ 
	f=f*i;
    i++;
    }
    return f;
}
int main(){
	int nb, resultas;
	printf("Entrer un nombre: ");
	scanf("%d",&nb);
    resultas=factorial(nb);
    printf("factorieele est =%d",resultas);
    return 0;
}