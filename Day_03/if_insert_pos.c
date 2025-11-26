#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == n) {
            return mid;  
        } else if (arr[mid] < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}
int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = 5;
    
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    printf("if_insert_pos(arr, %d, 5) = %d (found at index)\n", size, if_insert_pos(arr, size, 5));
    printf("if_insert_pos(arr, %d, 4) = %d (insert position)\n", size, if_insert_pos(arr, size, 4));
    printf("if_insert_pos(arr, %d, 0) = %d (insert at beginning)\n", size, if_insert_pos(arr, size, 0));
    printf("if_insert_pos(arr, %d, 10) = %d (insert at end)\n", size, if_insert_pos(arr, size, 10));
    printf("if_insert_pos(arr, %d, 7) = %d (found at index)\n", size, if_insert_pos(arr, size, 7));
    
    return 0;
}