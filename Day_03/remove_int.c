#include<stdio.h>
int main(){
	int n,i,arr[100],x,j=0;
	printf("enter n");
	scanf("%d",&n);
	printf("enter x");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
		for(i=0;i<n;i++){
	    if(arr[i]!=x){
	    	arr[j]=arr[i];
	    	j++;
		}
			
		
	}
	n=j;
	
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
