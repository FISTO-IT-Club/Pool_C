#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] >= n) {
            return i;
        }
    }
    return size;
}


int main() {
    int arr[] = {1, 3, 5, 6};
    int size = 4;

    printf("Target 5: Index %d\n", if_insert_pos(arr, size, 5));

    printf("Target 2: Index %d\n", if_insert_pos(arr, size, 2));

    printf("Target 7: Index %d\n", if_insert_pos(arr, size, 7));

    printf("Target 0: Index %d\n", if_insert_pos(arr, size, 0));

    return 0;
}