#include<stdio.h>
int sum_array(int arr[]){
int i , sum = 0;
for(i = 0 ; i < 5 ; i++){
sum += arr[i];
}
return sum;
}
int main(){
    int arr[5] = {7,10,4,6,14};
    printf("the sum of the array is :%d", sum_array(arr[5]));
    return 0;
}