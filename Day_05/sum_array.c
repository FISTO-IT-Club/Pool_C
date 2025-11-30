//Sum_array 
#include<stdio.h>

int sum_array(int arr[]){
int sum =0;
int i;
for(i=0;i<5;i++){
	sum +=arr[i];}
	return sum;
}


int main(){
  int arr[5];
  int i;
  printf("Enter 5 entier: ");
  for(i=0;i<5;i++){
	scanf("%d",&arr[i]);
  }
  int sum=sum_array(arr);
  printf("La somme des elements du tableau est:%d\n",sum);
  return 0;
}
