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



int main(void)
{
    int arr[] = {3, 5, 2, 5, 7, 5};
    int size = 6;
    int target = 5;


    remove_int(arr, size, target);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}