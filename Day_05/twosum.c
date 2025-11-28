#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d, %d]\n", i, j);
                return; 
            }
        }
    }

    printf("No solution found\n");
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int size = 4;
    int target = 22;

    two_sum(arr, size, target);

    return 0;
}