#include<stdio.h>
void two_sum(int arr[], int size, int target) {
    int i,j;
    for(i=0;i<=size-1;i++){
        for(j=i+1;j<=size;j++){
            if(arr[i]+arr[j]==target){
                printf("%d et %d \n",i,j);
            }
        }
    }

}
int main(){
    int arr[4]={5,6,5,4};
    int n=10;
    two_sum(arr,4,n);
}
