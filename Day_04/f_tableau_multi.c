#include<stdio.h>

void f_tableau_multi(int n);

int main(){
	int n;
    f_tableau_multi(n);
	return 0;
}
void f_tableau_multi(int n){
	int i ;
	printf("entrer un entier :\n");
	scanf("%d",&n);
	printf("le tab de mult de %d est :\n",n);
	for(i=0;i<=10;i++)
	printf("%d * %d = %d\n",i,n,i*n);		
}
