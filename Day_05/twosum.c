#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    int i, j;
    for (i=0; i <size - 1; i++) {      
        for (j = i + 1; j < size; j++) {  
            if (arr[i] + arr[j] == target) {
                printf(" the indices are:[%d,%d]", i , j ); 
                return; 
            }
        }
    }
    printf("no indices found in this array\n"); 
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 22;
    two_sum(arr, 4, target); 
    return 0;
}
