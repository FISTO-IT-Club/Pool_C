#include<stdio.h>
int sum_digits(int n){
	int i ;
	int sum=0;
	
	for( i=0 ; i<=n ;i++){
		int num =i;
		while ( num > 0 ){
			sum+=num%10 ;
			num /=10;
		}
	}
	return sum ;
}

int main(){
	int n ;
	printf("Entrer un entier : ");
	scanf("%d", &n);
	
	int sum=sum_digits(n);
	printf("La somme de 0 a %d est :%d ",n,sum);
	return 0;
}
