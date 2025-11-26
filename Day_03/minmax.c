#include <stdio.h>
#include<stdlib.h>
int min_max(int arr[],int size, int *min, int *max) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] < *min){
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
    printf("le Min est: %d, le Max est: %d\n",*min,*max);
    return 0;
}

int main() {
    int arr[] = {12, 5, 11, 80, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];
    min_max(arr,size,&min,&max);
    return 0;
}