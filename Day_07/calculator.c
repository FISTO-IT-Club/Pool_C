#include <stdio.h>
#include<math.h>

double addition(double a, double b){
	return a + b ;
}
double soustraction(double a, double b){
	return a - b ;
}
double multiplication(double a, double b){
	return a * b ;
}
double division(double a, double b){
	return a / b ;
}
long factorial(int n){
	long f=1;
	int i;
	for(i=1;i<=n;i++){
		f*=i;
	}
	return f;
}
double racine(double x){
	return sqrt(x);
}
double puissance2(double x){
	return x*x;
}
double puissance3(double x){
	return x*x*x;
}

