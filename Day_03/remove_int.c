#include<stdio.h>
void remove_int(int arr[],int size,int target){
	
	int i, j;
	
	for (i=0, j=0; i<size; i++){
		
		if(arr[i] != target){
			
			arr[j] = arr[i];
			j++;
		}
	}
	
	printf("%d ",j);
}
void print_array(int arr[], int size){
	int i;
	for( i=0; i<size; i++){
		printf("%d\t| ", arr[i]);
	}
	
	printf("\n");
}

int main(){
	
	int arr[]={1, 2, 3, 5, 6, 9};
	int size= sizeof(arr)/sizeof(arr[0]);
	int target = 3;
	
	printf("Tableau original : \n");
	print_array(arr, size);
	
	size=remove_int(arr, size, target);
	
	printf("Tableau apres suppression de %d: ", target);
	printf("\n");
	
	print_array(arr, size);
	
}
