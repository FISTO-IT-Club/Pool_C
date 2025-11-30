int* min_max(int arr[], int size){
	static int*p;
	int i;
	int max=arr[0] ;int min=arr[0];
	p=(int*)malloc(2*sizeof(int));
	if (p==NULL) exit(0);
	for(i=0;i<size;i++)
	{
		if (max< arr[i]) { *p=arr[i]; max = arr[i] ;}
		if (min> arr[i]){*(p+1)=arr[i]; min = arr[i] ;} 
	}
	return p;
	
}
