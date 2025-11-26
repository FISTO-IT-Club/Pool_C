#include <stdio.h>

void remove_int(int arr[], int size, int target)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            for (j = i; j < size - 1; j++)
                arr[j] = arr[j + 1];

            size--;
            i--; 
        }
    }

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {3, 5, 2, 5, 9, 5};
    int size = 6;

    remove_int(arr, size, 5);

    return 0;
}
