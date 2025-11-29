#include <stdio.h>
// your given function is of SUM array not sum degits: BY Ali
int sum_array(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
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

