#include <stdio.h>


void min_max(int arr[], int size, int *min, int *max)
{
    int i;

    if (size <= 0)
        return;

    *min = arr[0];
    *max = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}
