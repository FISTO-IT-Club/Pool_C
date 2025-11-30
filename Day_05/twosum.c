#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d, %d]\n", i + 1, j + 1);
                return;
            }
        }
    }
    printf("No two numbers add up to target.\n");
}

int main() {
    int arr[] = {2, 7, 11, 15};
    two_sum(arr, 4, 22); // Output: [2, 4]
    return 0;
}cd