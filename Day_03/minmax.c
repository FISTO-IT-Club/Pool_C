#include<stdio.h>
int min_max(int arr[], int size, int *min, int *max ){
	int i;
	if(size == 0){
		return -1;
	}
	*min = arr[0];
	*max = arr[0];
	for( i=1;i<size;i++){
		if(arr[i] < *min){
			*min = arr[i];
		}else if (arr[i] > *max){
			*max = arr[i];
		}
	}
	return 0;
}
int main(){
	int arr[] = {5,12,8,18,20,100};
	int size = sizeof(arr)/sizeof(arr[0]);
	int min, max, i;
	if (min_max(arr, size, &min, &max)==-1){
		printf("Erreur: Tableau vide ! \n");
	}else {
		printf ("Tableau : \n");
		for( i=0;i<size; i++){
			printf("%d\t|", arr[i]);
		}
		printf("\n");
		printf("Minimum : %d\n", min);
		printf("Maximum : %d\n", max);
	}
	return 0;
}
