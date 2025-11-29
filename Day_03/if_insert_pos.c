#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            return i;
        }
    }
    return size;
}

int main() {
     int numbers[] = {10, 3, 55, -2, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("%d", if_insert_pos(numbers, size, -1));
}