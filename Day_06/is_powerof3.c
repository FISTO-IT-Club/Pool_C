#include<stdio.h>
#include<stdbool.h>

bool is_powerof3(int n){
	if (n==1)	return true ;
	if (n<=0)	return false ;
	if (n%3 != 0)  return false ;
	return is_powerof3(n/3);
}
int main(){
	int n;
	printf("enter un entier n :\n");
	scanf("%d",&n);
	if(is_powerof3(n)){
		printf("%d est une puissance de 3 \n",n);
	}
	else{
		printf("%d n'est pas une puissance de 3 \n",n);
	}
	return 0;
}
