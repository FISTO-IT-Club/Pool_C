#include <stdio.h>

int sum_array(int arr[]) {
    printf("sum array ");
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", sum_array(arr));
    return 0;
}