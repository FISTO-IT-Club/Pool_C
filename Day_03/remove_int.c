#include <stdio.h>


int remove_int(int arr[], int size, int target)
{
    int i, j = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] != target)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    return j;  
}
