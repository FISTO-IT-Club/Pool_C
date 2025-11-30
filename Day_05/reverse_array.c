#include<stdio.h>

void reverse_array(int arr[]);

int main(){
	int arr[5],i;
	printf("entrer les elts de tab de 5 entiers :\n");
	for(i=0;i<5;i++){
	scanf("%d",&arr[i]);}
	reverse_array(arr);
	printf("l\'inverse de tab est : ");
    for(i=0;i<5;i++){
    	printf("%d ",arr[i]);}
	return 0;	
}
void reverse_array(int arr[]){
	int i,j,n=5,tmp ;
	for(i=0,j=n-1;j>i;i++,j--){
		tmp=arr[i];
		arr[i]=arr[j];
		arr[j]=tmp;
	}
}
