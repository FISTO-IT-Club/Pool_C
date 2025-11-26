#include<stdio.h>

int min_max(int arr[],int n,int *max,int *min);

int main(){
	int tab[]={3,0,4,8,7,1};
	int mn, mx;
	min_max(tab,6,&mx,&mn);
	printf("le min de tab est :%d\nle max de tab est :%d\n",mn,mx);
	
	return 0;	
}
int min_max(int arr[],int n,int *max,int *min){
	int i ;
	*max=arr[0];
	*min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<*min)
		*min=arr[i];
		if(arr[i]>*max)
		*max=arr[i];
		}
	return min,max;
	}
	
	
	
	
	
	
	
	
	

