#include<stdio.h>
long long fib_taille(int n,long long a, long long b ){
	if(n==0){
		return a;
	}
	return fib_taille(n-1,b,a+b);
}
int main(){
	int n;
	printf("enter un entier n :\n");
	scanf("%d",&n);
	long long result = fib_taille(n,0,1);
	printf("F(%d)=%lld",n,result);
	
	
	return 0;
}
