#include <stdio.h>
void remove_int(int arr[], int size, int target) 
{
    for (int i = target; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = 0;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    remove_int(arr, size, target);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}