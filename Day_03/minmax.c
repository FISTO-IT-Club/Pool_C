#include <stdio.h>

void min_max(int arr[], int size, int *min, int *max) {
    if (size <= 0) {
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
int main() {
    int arr[] = {3, 7, 1, 9, 2, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    
    min_max(arr, size, &min, &max);
    
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    
    return 0;
}