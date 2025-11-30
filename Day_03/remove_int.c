#include <stdio.h>

int remove_int(int arr[], int size, int target)
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
    return j;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int new_size = remove_int(arr, size, 2);

    printf("Array after removal: ");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
