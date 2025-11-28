#include <stdio.h>

int sum_array(int arr[]) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int result = sum_array(arr);

    printf("Sum = %d\n", result);

    return 0;
}