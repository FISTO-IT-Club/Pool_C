#include<stdio.h>
// RangeError: invalid array length, the array only has 5 elements not 6.
// by Ali
void reverse_array(int arr[]){
    int i;
    for(i=5;i>=0;i--){
        printf("|%d|",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    reverse_array(arr);
    return 0;
}
