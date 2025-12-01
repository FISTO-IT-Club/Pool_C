#include <stdio.h>

void reverse_array(int arr[])
{
    int i = 4;   // dernier index

    while (i >= 0)
    {
        printf("%d ", arr[i]);
        i--;
    }
}
