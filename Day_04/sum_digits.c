#include<stdio.h>
int main(){
	int i,n,s=0;
	printf("entre n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	s=s+i;
	}
	printf("la somme est %d",s);
	return 0;
}
