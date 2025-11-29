#include <stdio.h>
int remove_int(int arr[], int size, int target) {
    int i, j;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            for (j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }
    return size;
}
int main() {
    int arr[10] = {3,5,7,14,9,10,1,2,41,4};
    int size=10;
    int target=9;
    size = remove_int(arr, size, target);
    for (int i = 0; i < size; i++) 	{
        printf("%d ", arr[i]);
    }
    return 0;
}