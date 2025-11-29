#include <stdio.h>

void remove_int(int arr[], int size, int target) {
    int counter = 0;

    for (int i=0; i<size; i++) {
        if (arr[i] == target) {
            // printf("%d and %d\n", i, arr[i]);
            if (i > 1 && i <= size -1) {
                arr[i] = arr[i-1];
            }else {
                arr[i] = arr[i+1];
            }
        }
    }
}

int main()
{
    int numbers[] = {10, 3, 55, -2, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    remove_int(numbers, size, -2);

    for (int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}