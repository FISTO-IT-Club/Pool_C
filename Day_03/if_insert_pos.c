#include<stdio.h>
int if_insert_pos(int arr[], int size, int n){
	int left;
	int right = size -1;
	
	while(left <= right){
		int mid =left+(right - left)/2;
		
		if (arr[mid] == n){
			return mid;
		}else if(arr[mid < n]){
			return left = mid +1;
		}else{
			return right = mid-1;
		}
	}
	return left;
}
void print_array(int arr[], int size){
	int i;
	for( i=0; i<size; i++){
		printf("%d\t| ", arr[i]);
	}
	
	printf("\n");
}

int main(){
	int arr[]={1,2, 3, 5, 6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int n=5;
	
	printf("Tableau : \n");
	print_array(arr, size);
	
	int index = if_insert_pos(arr, size, n);
	printf("Index : %d\n",index);
	
	n=2;
	index = if_insert_pos(arr, size, n);
	printf("Index : %d\n",index);
	
	n=6;
	index = if_insert_pos(arr, size, n);
	printf("Index : %d\n",index);
	
	return 0;
}
