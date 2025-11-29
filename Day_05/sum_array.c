#include <stdio.h>

int sum_array(int arr[]) {
    int result = 0;
    for (int i=0; i<5; i++) {
        result += arr[i];
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d",sum_array(arr));
    return 0;
}