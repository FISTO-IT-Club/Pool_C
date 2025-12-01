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
    int size = sizeof(arr) / sizeof(arr[0]);

    int n = 5;
    printf("Insert position for %d is %d\n", n, if_insert_pos(arr, size, n));

    n = 2;
    printf("Insert position for %d is %d\n", n, if_insert_pos(arr, size, n));

    n = 7;
    printf("Insert position for %d is %d\n", n, if_insert_pos(arr, size, n));

    return 0;
}
