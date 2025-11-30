#include <stdio.h>

void min_Max(int arr[], int size, int *min, int *Max) {

    if (size <= 0) {
        printf("tableau vide !\n");
        return;
    }

    *min = arr[0];
    *Max = arr[0];

    for (int i = 1; i <= size; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *Max = arr[i];
    }
}

int main() {

    int arr[] = {-1, 5, 13, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
	int min, Max;
    min_max(arr, size, &min, &Max);

    printf("Min = %d\n", min);
    printf("Max = %d\n", Max);

    return 0;
}
