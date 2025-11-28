#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    for(int i = 0; i < size; i++) {
        if(arr[i] >= n) {
            return i;  
        }
    }
    return size;  
}

int main() {
    int arr[] = {1, 3, 5, 6};
    int size = 4;
    int n = 5;

    int pos = if_insert_pos(arr, size, n);
    printf("Index: %d\n", pos);

    n = 2;
    pos = if_insert_pos(arr, size, n);
    printf("Index: %d\n", pos);

    n = 7;
    pos = if_insert_pos(arr, size, n);
    printf("Index: %d\n", pos);

    return 0;
}
