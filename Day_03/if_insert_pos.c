#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            return i;          
        }
        if (arr[i] > n) {
            return i;         
        }
    }
    return size; 
}

int main() {
    int arr[] = {1, 4, 7, 10};
    int size = 4;

    printf("%d\n", if_insert_pos(arr, size, 7));  
    printf("%d\n", if_insert_pos(arr, size, 8));  
    printf("%d\n", if_insert_pos(arr, size, 0)); 
    printf("%d\n", if_insert_pos(arr, size, 20)); 

    return 0;
}

