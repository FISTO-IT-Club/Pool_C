#include <stdio.h>

int if_insert_pos(int arr[], int size, int target) 
{
    int left = 0;
    int right = size - 1;
    
    // binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;  // Found at index mid
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return left;
}

int main() {
    // Test case 1: Sorted array
    int arr1[] = {1, 3, 5, 7, 9, 11};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 2;
    
    int pos1 = if_insert_pos(arr1, size1, target1);
    if (pos1 < size1 && arr1[pos1] == target1) {
        printf("Target %d founded %d\n", target1, pos1);
    } else {
        printf("Target %d ,Should beat index %d\n", target1, pos1);
    }
    

    
    return 0;
}