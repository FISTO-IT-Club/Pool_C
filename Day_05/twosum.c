#include<stdio.h>


int sum_array(int arr[]);

int main(){
	int arr[5],i,S;
	printf("entrer les elts de tab de 5 entiers :\n");
	for(i=0;i<5;i++){
	scanf("%d",&arr[i]);}
	S=sum_array(arr);
	printf("la somme des elets de tab est : %d",S);
	return 0;	
}
int sum_array(int arr[]){
	int i,n=5,sum=0 ;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}
