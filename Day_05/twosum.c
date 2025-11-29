#include <stdio.h>


void two_sum(int arr[], int size, int target, int *i1, int *i2)
{
    int i, j;

    *i1 = -1;
    *i2 = -1;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                *i1 = i;
                *i2 = j;
                return;
            }
        }
    }
}
