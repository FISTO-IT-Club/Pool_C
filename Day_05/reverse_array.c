#include <stdio.h>
  
#define len 5

void reverse_array(int arr[]){
    int i, rev=0 ;
    for(i=0; i<len/2; i++){
        rev=arr[i] ;
        arr[i]=arr[len-1-i] ;
        arr[len-1-i]=rev ;
    }

    for(i=0; i<len; i++)
        printf("%d\t", arr[i]) ;
}

int main() {
    int arr[5]={1,2,3,4,5} ;
    reverse_array(arr) ;
}
