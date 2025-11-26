#include <stdio.h>

void remove_int(int arr[], int size, int target)
{
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != target)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    // Le reste n’est pas obligatoire, mais propre
    for (int k = j; k < size; k++)
        arr[k] = 0;
}


