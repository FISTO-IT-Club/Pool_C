void remove_int(int arr[], int size, int target) {
    int i;
    int j = 0;
   
    for ( i = 0; i < size; i++) {
        if (arr[i] != target) {
            arr[j] = arr[i];
            j++;
        }
      
    }
      printf("Array after removing %d: \n", target);
    for (i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
   
}
int main() {
	int arr[]={4,9,8,7,6,3,9,1};
	int size=8;
	int target;
	 int i;
    for (i = 0; i < size; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
	printf("Enter target to remove: ");
    scanf("%d", &target);
	remove_int( arr, size,target);
	  



   
    return 0;
}