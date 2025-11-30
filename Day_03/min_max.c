#include <stdio.h>
#include <stddef.h> 

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

    int arr[5] = {1, 4, 25, 10, 15};
    int Min;
    int Max;
    min_max(arr , 5, &Min, &Max);
    printf("Min = %d, Max = %d\n", Min, Max);

    return 0;
}