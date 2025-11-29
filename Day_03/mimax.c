#include <stdio.h>
int min,max;
int min_max(int arr[]) {
    int size, i;
    size=10;
    min = arr[0];
    max = arr[0];
    for (i = 0; i < size; i++) {
        if(arr[i] < min){
        	min = arr[i];
		}
        if(arr[i] > max){
        	max = arr[i];
		}
    }
    return 0;
}
int main() {
    int arr[] = {4, 2, 9, 1, 6,15,20,45,3,78};
    min_max(arr);
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
    return 0;
}