#include <stdio.h>

void reverse_array(int arr[], int size) {
    int tmp;
    int i;
    for (i = 0; i < size / 2; i++) {
        tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}

int main() {
    int arr[5];
    int i;
    printf("Enter 5 entiers : ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Tableau original : \n");
    for (i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
    reverse_array(arr, 5);
    printf("Inverse le tableau : \n");
    for (i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
