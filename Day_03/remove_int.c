#include<stdio.h>
int main() {
    int arr[] = {3, 1, 5, 3, 7, 3, 9} ;
    int size = 7;
    int target = 3;                    
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != target) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    printf("Array after removing %d:\n", target);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
