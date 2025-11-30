#include<stdio.h>

int main(){
	int nb,i;
	printf("enter nb");
	scanf("%d",&nb);
	int k=nb;
	for(i=nb-1;i>1;i--){
		k=k*i;
	}
	printf("%d!=%d",nb,k);
	
}
