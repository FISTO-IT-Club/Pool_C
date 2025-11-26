#include <stdio.h>

int min_max(int arr[], int n) {

     int i ;
  int min= arr[0];
  int max= arr[0];

  for( i=0 ; i <n ; i++) {
     if (i == 0) {
        min = arr[i];
        max = arr[i];
    } else {
        if (arr[i] < min) min =arr[i] ;
        if (arr[i] > max) max =arr[i] ;
    }
}
      printf("Min = %d",min) ;
      printf("Max = %d\n",max) ;
    }

int main() {
    int arr[]={4,9,3,6,2,1,5,7,8} ;
    int n=9 ;
min_max(arr, n) ;

   return 0 ;
}