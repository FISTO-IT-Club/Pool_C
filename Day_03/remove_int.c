
#include <stdio.h>


int remove_int(int *arr, int n, int target) {
    int j = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] != target) {
            arr[j++] = arr[i]; 
        }
    }

    return j; 
}

int main(void) {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter target value to remove: ");
    scanf("%d", &target);

    int new_size = remove_int(arr, n, target);

    printf("Array after removing %d:\n", target);
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
