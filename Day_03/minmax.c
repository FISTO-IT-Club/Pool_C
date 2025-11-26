#include <stdio.h>

int min_max(int arr[], int size, int *max)
{
    int min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
    return min;
}

