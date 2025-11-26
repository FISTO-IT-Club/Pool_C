#include <stdio.h>


void min_max(int arr[], int size, int *min_ptr, int *max_ptr) {
    if (size <= 0) {
        return; 
    }

    *min_ptr = arr[0];
    *max_ptr = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min_ptr) {
            *min_ptr = arr[i];
        }

        if (arr[i] > *max_ptr) {
            *max_ptr = arr[i];
        }
    }
}

