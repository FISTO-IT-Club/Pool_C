#include <stdio.h>

void min_max(int arr[], int size, int result[]) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    result[0] = min; // return min
    result[1] = max; // return max
}

int main() {
    int arr[] = {5, 2, 9, -3, 7};
    int result[2];

    min_max(arr, 5, result);

    printf("min = %d, max = %d\n", result[0], result[1]);
    return 0;
}
