#include<stdio.h>

void two_sum(int arr[],int size,int target){
	int i,j;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
		    if(arr[i]+arr[j]==target){
		   printf("Indices:[%d,%d]\n",i+1,j+1);
		     return;
			}	
		}
	}
	printf("Aucune paire trouvee.\n");
}
int main(){
	int n,target,i;
	printf("Entrer la taille du tableau :");
	scanf("%d",&n);
	int arr[n];
	printf("Entrer les elts de tab:\n");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	printf("Entrer un nmbre : ");
	scanf("%d",&target);
	two_sum(arr,n,target);
	return 0;
}
