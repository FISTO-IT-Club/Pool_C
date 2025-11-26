#include<stdio.h>
int  min_max(int arr[], int size, int *min, int *max){
    if(size <= 0){ 
     return size;
    }

    *min = arr[0];
    *max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < *min){
        *min = arr[i];
        }
        if(arr[i] > *max){
            *max = arr[i];
        }
    }
    return 0;
}

int main(){ 
   int  n = 5, min, max;
    int arr[] = {3, 5, 1, 8, 2};
    min_max(arr, n, &min, &max);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    return 0;
}


