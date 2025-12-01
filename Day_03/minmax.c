#include <stdio.h>
#include <limits.h>

void min_max(int arr[], int size, int *min, int *max) {
    if (size <= 0) {
        return; 
    }

    *min = INT_MAX;
    *max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, -3, 7};
    int size = 5;
    int min, max;

    min_max(arr, size, &min, &max);

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}

