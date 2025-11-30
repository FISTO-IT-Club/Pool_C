#include <stdio.h>
#include <stdbool.h>

void remove_int(int arr[], int size, int target)
{
    int arrcopy[size];
    bool Target_Founded = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            for (int j = i; j < size-1; j++) {
                arrcopy[j] = arr[j+1];
            }
            Target_Founded = true;
            break;
        }
        arrcopy[i] = arr[i];
    }
    if (Target_Founded == false) {
        printf("Not found\n");
    }
    else {
        for (int i = 0; i < size-1; i++) {
            arr[i] = arrcopy[i];
        }
    }
}

int main() {
    int arr[10] = {1, 4, 8, 10, 44, 0, 100, -80, 65, 3};
    remove_int(arr, 10, 44);
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
}