#include<stdio.h>
// unjustified but good try, when the parameter is 6 (x=6), it will return it as a puissance of 2, but actually!
// 6 n'est pas une puissance de 2 frero :), by Ali
int f_ispowerof2(int x) {
    if(x%2==0){
    	printf("%d est une puissance de 2",x);
	}else{
		printf("%d n'est pas une puissance de 2",x);
	}
}

int main(){
	int x;
	printf("entrer la valeur de x :");
	scanf("%d",&x);
	f_ispowerof2(x);
}
