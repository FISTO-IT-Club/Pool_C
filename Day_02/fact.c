#include<stdio.h>

int factorial(int nb);

int main(){
	int n;
	printf("entrer un entier :\n");
    scanf("%d",&n);
	printf("Factorielle de %d est :%d\n",n,factorial(n));
	return 0;	
}
int factorial(int nb){
    if(nb<0)
       return 0;
       if(nb==0 || nb==1)
	         return 1;
	        
	return nb*factorial(nb-1);   
}
