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
    printf("No pair found.\n");
}

int main() {
    int arr[] = {10, 3, 4, 12,9,13};
    int target ;
    printf("printe target ");
    scanf("%d",&target);

    two_sum(arr, 6, target);

    return 0;
}
