#include<stdio.h>
void min_max(int arr[],int size,int target) {
     int i;
    for(i=0;i<size;i++){
        if(arr[i]!=target){

    printf("%d",arr[i]);
        }

        }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int tar;
    printf("entrer nombre");
    scanf("%d",&tar);
     min_max(arr,5,tar);




}
