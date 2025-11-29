#include <stdio.h>

int sum_array(int arr[]) {
    int sum = 0;
    int i;
    for ( i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {2, 7, 11, 15, 4};

    int result = sum_array(arr);
    printf("Sum = %d\n", result);

    return 0;
}

