#include <stdio.h>

void two_sum(int arr[], int size, int target) {

    for (int i =0; i < size - 1; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[j] + arr[i] == target) {
                printf("[%d, %d] \n", i, j);
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4,6, 5, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    two_sum(arr, size, 19);
}