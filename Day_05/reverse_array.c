#include<stdio.h>
void reverse_array(int arr[]){
    int temp ;
    for (int i = 0 ; i < 5/2 ; i++){
        temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = temp;
    }
}
int main(){
    int arr[] ={3,8,4,1,6};
    printf("array before reverse:\n");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    printf("array after reverse:\n");
    reverse_array(arr);
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}