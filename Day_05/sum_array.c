#include <stdio.h>

int sum_array(int arr[]) {
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    int sum = sum_array(arr);
    
    printf("The sum of the array is: %d\n", sum);
    
    return 0;
}