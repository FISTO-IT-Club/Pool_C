#include <stdio.h>

int min_max(int arr[], int n)  
{
    if (n <= 0) return 0;     
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < n; i++){
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    
    return max - min;
}

int main() {
    int numbers[] = {4, 2, 9, 1, 7, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int range = min_max(numbers, size);  
    printf("Range of the array: %d\n", range);
    
    return 0;
}