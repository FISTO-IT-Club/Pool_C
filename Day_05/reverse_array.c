int reverse_array(int arr[]) {

	int i;
	

	for(i=4;i>=0;i--){
			printf("%d",arr[i]);
	}
	
}


int main() {
	int i;
	int arr[5]={4,9,8,7,6};
	
for(i=0;i<5;i++){
		printf("%d",arr[i]);
		
	}
 
   printf("\n");
   reverse_array(arr);
 		


   
    return 0;
}

