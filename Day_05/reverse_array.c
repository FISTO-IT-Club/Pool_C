#include <stdio.h>

void reverse_array(int arr[]) {
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    reverse_array(arr);
}