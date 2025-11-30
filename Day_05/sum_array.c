int sum_array(int arr[]) {
	int s=0;
	int i;
	

	for(i=0;i<5;i++){
		s=s+arr[i];
		
	}
	return s;
}


int main() {
	int i;
	int arr[5]={4,9,8,7,6};
	int s;
for(i=0;i<5;i++){
		printf("%d",arr[i]);
		
	}
  printf("\n");
s=sum_array(arr);
 		printf(" sum of 5-int array: %d",s);


   
    return 0;
}

