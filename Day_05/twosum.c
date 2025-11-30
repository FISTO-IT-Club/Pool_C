#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d,%d]\n", i + 1, j + 1);
                return;
            }
        }
    }
    printf("PAS DE SOLUTION \n");
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int size = 4;
    int target = 42;
    
    printf("Array: {2,7,11,15}, Target: %d → ", target);
    two_sum(arr, size, target);
    
    return 0;
}
