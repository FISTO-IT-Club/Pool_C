#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Indices: [%d, %d]\n", i + 1, j + 1);
                printf("Values: arr[%d] = %d, arr[%d] = %d\n", 
                       i + 1, arr[i], j + 1, arr[j]);
                printf("Sum: %d + %d = %d\n", arr[i], arr[j], target);
                return;
            }
        }
    }
    printf("No two sum solution found for target %d\n", target);
}

int main() {
    int arr1[] = {2, 7, 11, 15};
    int size1 = 4;
    int target1 = 22;
    
    printf("Array: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nTarget: %d\n", target1);
    two_sum(arr1, size1, target1);
    
    printf("\n");
    
    int arr2[] = {3, 2, 4};
    int size2 = 3;
    int target2 = 6;
    
    printf("Array: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\nTarget: %d\n", target2);
    two_sum(arr2, size2, target2);
    
    return 0;
}