#include<stdio.h>
#include<math.h>
int sqrtX(int nb)
{
	sqrt(nb);
}
int main(){
	int nb;
	float resultas;
	printf("Entrer un nombre: ");
	scanf("%d",&nb);
    resultas=sqrt(nb);
    printf("la racine =%.2f",resultas);
    return 0;
}