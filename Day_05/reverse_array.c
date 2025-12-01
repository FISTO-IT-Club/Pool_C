#include <stdio.h>

void reverse_array(int arr[]) {
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    reverse_array(arr);

    return 0;
}
