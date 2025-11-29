#include <stdio.h>

int min_max(int arr[], int size, int *min, int *max) {
    if (size <= 0) return -1;
    *min = arr[0];
    *max = arr[0];

    for (int i=0; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }else if (arr[i] > *max) {
            *max = arr[i];
        }
    }
    return 0;
}

int main() {
    int numbers[] = {10, 3, 55, -2, 8};
    int min, max;

    min_max(numbers, 5, &min, &max);

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}