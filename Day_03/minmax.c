#include <stdio.h>

void min_max(int arr[], int size, int *min, int *max)
{
    int i;

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

int main()
{
    int arr[] = {5, 2, 9, -1, 3};
    int min;
    int max;

    min_max(arr, 5, &min, &max);

    printf("min = %d\n", min);
    printf("max = %d\n", max);

    return 0;
}
