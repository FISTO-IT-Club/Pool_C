#include <stdio.h>

int sum_array(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int total = sum_array(arr);
    printf("la somme du 5 element premier de cette array est: %d\n", total);

    return 0;
}
