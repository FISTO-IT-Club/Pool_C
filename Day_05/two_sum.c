#include <stdio.h>
void two_sum(int arr[], int size, int target) {

    for (int i = 0; i < size; i++) {

        for (int j = i + 1; j < size; j++) {
            
            if (arr[i] + arr[j] == target) {
                printf("[%d,%d]\n", i + 1, j + 1);
            }
        }
    }

}

int main() {
    int arr[] = {2, 7, 11, 15};
    int size = 4;
    int target = 22;

    printf("Target: %d\n", target);
    printf("Indices: ");
    
    two_sum(arr, size, target);


}