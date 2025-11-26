#include <stdio.h>

void remove_int(int arr[], int *size, int target) {
    int index = -1;

    for (int i = 0; i < *size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int i = index; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    } else {
        printf("Element pas trouver\n");
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    remove_int(arr, &size, 5);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}