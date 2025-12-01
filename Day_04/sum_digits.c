#include<stdio.h>

int sum_digits(int n);

int main(){
	int T ,S ;
	S=sum_digits(T);
	return 0;
}
int sum_digits(int n){
	int i,s=0;
	printf("entrer un entier :\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		s=s+i;
	printf("la somme de 0 a\' %d est: %d\n",n,s);
	return s;
}
