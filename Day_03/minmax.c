#include <stdio.h>

void min_max(int arr[], int size, int *min, int *max)
{
    if (size <= 0 || min == NULL || max == NULL)
        return;

    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main()
{
    int min, max;
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    min_max(arr, size, &min, &max);

    printf("Min: %d, Max: %d\n", min, max);

    return 0;
}
