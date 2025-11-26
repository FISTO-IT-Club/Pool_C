#include <stdio.h>

int remove_int(int arr[], int size, int target) {
    int j = 0;  

    for(int i = 0; i < size; i++) {
        if(arr[i] != target) {
            arr[j] = arr[i];  
            j++;
        }
    }
    return j;  
}

int main() {
    int arr[] = {5, 2, 3, 2, 9, 2, 4};
    int size = 7;
    int target = 2;

    size = remove_int(arr, size, target);

    printf("Array after removal: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
