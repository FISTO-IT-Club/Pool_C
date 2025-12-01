#include<stdio.h>
int sum_array(int arr[]) {
    int i,s=0;
    for(i=0;i<5;i++){
        s=s+arr[i];
    }
    printf(" sum of 5-int array:%d",s);
}
int main(){
    int arr[5]={1,1,1,1,1};
    sum_array(arr);
}