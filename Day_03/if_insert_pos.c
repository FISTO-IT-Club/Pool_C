#include <stdio.h>

int if_insert_pos(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target1 = 4;
    int pos1 = if_insert_pos(arr, size, target1);
    printf("Position for %d: %d\n", target1, pos1);

    return 0;
}
