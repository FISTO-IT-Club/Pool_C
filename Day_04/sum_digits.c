#include<stdio.h>
 void  sum_digits(int n) {
	int i;
	int s=0;

	for(i=0;i<=n;i++){
		s=s+i;

}	
	printf("La somme de 0 a %d est %d\n", n, s);
	}
	int main(){
		int n;
			printf("entrer le nombre.");
	scanf("%d",&n);
		sum_digits( n);
		 
		return 0;
	}
	
	
	