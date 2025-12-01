#include<stdio.h>
int main() {
    int arr[] = {5, 2, 9, -3, 7} ;   
    int size = 5;
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
    return 0;
}
