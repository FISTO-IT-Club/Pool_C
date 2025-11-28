#include <stdio.h>

void min_max(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] < *min) {
            *min = arr[i];
        }
        if(arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int size = 6;
    int min, max;

    min_max(arr, size, &min, &max);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
