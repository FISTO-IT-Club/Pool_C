#include <stdio.h>

void remove_int(int arr[], int size, int target)
{
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != target) {
            arr[j] = arr[i];
            j++;
        }
    }
    while (j < size) {
        arr[j] = 0;
        j++;
    }
}

int main() {
    int arr[5] = {1, 5, 10, 40, 0}; 
    int size = 5; 

    remove_int(arr, size, 40);

    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}