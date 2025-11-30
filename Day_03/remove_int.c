#include <stdio.h>

int remove_int(int arr[], int size, int target) {
    int write_idx = 0;
    for (int read_idx = 0; read_idx < size; read_idx++) {
        if (arr[read_idx] != target) {
            arr[write_idx] = arr[read_idx];
            write_idx++;
        }
    }
    
    return write_idx; 
}
void print_array(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
int main() {
    int arr[] = {3, 7, 2, 7, 1, 7, 9, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    printf("Original array: ");
    print_array(arr, size);
    printf("Target to remove: %d\n", target);
    
    int new_size = remove_int(arr, size, target);
    
    printf("Array after removal: ");
    print_array(arr, new_size);
    printf("New size: %d\n", new_size);
    
    return 0;
}