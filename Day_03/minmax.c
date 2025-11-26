#include <stdio.h>

void min_max(const int arr[], int size, int *min, int *max) {
    if (size <= 0 || arr == NULL || min == NULL || max == NULL) {
        return;
    }

    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main(void) {
    int arr[10] = {1, 4, 8, 10, 44, 0, 100, -80, 65, 3};
    int Min, Max;

    min_max(arr, 10, &Min, &Max);
    printf("Min = %d, Max = %d\n", Min, Max);
    return 0;
}