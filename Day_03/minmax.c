int min_max(int arr[], int size,  char mode)
{
    if (mode == 'm') {
        int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;

    } else if (mode == 'M') {
     int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
    return -1;
}





#include <stdio.h>
int main(void)
{
    int arr[] = {3, 5, 2, 8, 1, 4};
    int size = 6;
    printf("Array elements: %d", arr.sizeof(arr)/sizeof(arr[0]));

    int min = min_max(arr, size, 'm');
    int max = min_max(arr, size, 'M');

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}