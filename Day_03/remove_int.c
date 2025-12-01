#include <stdio.h>

void remove_int(int arr[], int size, int target) {
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
    int arr[8] = {3, 2, 3, 5, 3, 7, 3, 10};
    int size = 8;

    remove_int(arr, size, 3);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
