#include <stdio.h>

void min_max(int arr[], int size, int result[2]) {
    int min = arr[0];
    int max = arr[0];
    int i;

    for ( i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    result[0] = min;
    result[1] = max;
}

int main() {
    int arr[] = {5, 2, 9, -3, 8};
    int r[2];

    min_max(arr, 5, r);
    printf("Min = %d, Max = %d\n", r[0], r[1]);
    return 0;
}

