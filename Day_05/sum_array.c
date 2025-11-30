#include <stdio.h>

int sum_array(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {48, 42, 10, 50, 53, 40, 58, 14, 90, 480};

    printf("%d\n", sum_array(arr));

    return 0;
}