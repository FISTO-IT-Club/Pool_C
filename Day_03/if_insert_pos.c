#include <stdio.h>

int if_insert_pos(int arr[], int size, int n)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == n)
            return i;

        if (arr[i] > n)
            return i;
    }

    return size;
}

int main()
{
    int arr[] = {1, 3, 5, 7};
    int size = 4;

    printf("%d\n", if_insert_pos(arr, size, 5)); // found at index 2
    printf("%d\n", if_insert_pos(arr, size, 6)); // would be index 3
    printf("%d\n", if_insert_pos(arr, size, 0)); // would be index 0

    return 0;
}
