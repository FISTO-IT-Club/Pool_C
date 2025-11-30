#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    int i, j;
    int found = 0;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d, %d]", i + 1, j + 1);

                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }

    if (found == 0) {
        printf("No result.");

    }
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int size = 4; 
    int target = 22;

    two_sum(arr, size, target);

    return 0;
}

