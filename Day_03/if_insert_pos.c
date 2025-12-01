#include<stdio.h>
int if_insert_pos(int arr[], int size, int n) {
    int i,index;
    for(i=0;i<n;i++){
        if(arr[i]==n){
            return i;
        }
    else{


                if(arr[i]<arr[i+1]){
                   index=1;
                }
                else{
                    index=0;
                }

               if(index==1){

               if(arr[i+1]<n && arr[i+2]>n ||arr[0]<n){
                  return i;

               }

        }

     }
    }
}
int main(){
    int arr[5]={4,5,6,7,9};
    int n=8;

    printf("%d",if_insert_pos(arr,5,n));
}
