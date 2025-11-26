#include <stdio.h>

int remove_int(int arr[], int size, int target) {
    int newSize = 0;
    int i;

    for ( i = 0; i < size; i++) {
        if (arr[i] != target) {
            arr[newSize] = arr[i]; 
            newSize++;
        }
    }

    return newSize;  // nouvelle taille du tableau
}

int main() {
    int arr[10] = {3, 2, 3, 5, 3, 7};
    int size = 6;

    size = remove_int(arr, size, 3);

    printf("Nouveau tableau : ");
    int i;
    for ( i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}

