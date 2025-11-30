#include<stdio.h>
int main(){
	int i,n,p;
	printf("entre n");
	scanf("%d",&n);
	for(i=0;i<=10;i++){
		p=i*n;
		printf("%d*%d=%d\n",n,i,p);
	}
	return 0;
}
