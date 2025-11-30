#include <stdio.h>
#define N 10

int min_max(int arr[N], int *min, int *max) {
    int i;

    *min = arr[9];
    *max = arr[0];
    for (i=0; i<N; i++) {
        if (arr[i] <= *min) {
            *min = arr[i];
        }
        else if (arr[i] >= *max) {
            *max = arr[i];
        }
    }
    return 0;
}

int main(){
    int i, max, min;
    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    min_max(arr, &min, &max);
    printf("min = %d et max = %d", min, max);
}