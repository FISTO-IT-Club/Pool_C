#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    printf("two sum ");
    for (int i = 0; i < size; i++) {
        
        for (int j = i + 1; j < size; j++) {
            
            if (arr[i] + arr[j] == target) {
                
                printf("[%d,%d]\n", i, j);
                
                return;
            }
        }
    }
}

int main() {
    
    int arr[] = {2, 7, 11, 15};
    
    int target = 22;
    two_sum(arr, 4, target);
    
    return 0;
}