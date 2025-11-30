#include<stdio.h>
int main (){
	int arr[100],i,n,max,min;
	printf("enter la valeur de n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	min=arr[0];
	for(i=1;i<n;i++){
		
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("min=%d",min);
		max=arr[0];
	for(i=1;i<n;i++){
		
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("max=%d",max);
	return 0;
}
