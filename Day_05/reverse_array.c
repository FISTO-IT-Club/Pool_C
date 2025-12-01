#include <stdio.h>

void reverse_array(int arr[]) {
    int temp;
    for (int i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[5 - 1 - i];
        arr[5 - 1 - i] = temp;
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    reverse_array(arr);
    printf("original array: 10 20 30 40 50\n" );
    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
