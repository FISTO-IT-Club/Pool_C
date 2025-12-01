#include<stdio.h>
int min_max(int arr[],int size) {
    int max,min,i;
    min=arr[0];
      for(i=0;i<size;i++){
         if(arr[i]<=min ){
                min=arr[i];

         }

    }
    printf("le min est %d",min);
    printf("\n");

    max=arr[0];
    for(i=0;i<size;i++){
         if(arr[i]>=max ){
                max=arr[i];

         }

    }
    return max;






}
int main(){
    int arr[5]={3,4,5,6,7};
         printf("le max est %d",min_max(arr,5));

}
