#include <stdio.h>


int if_insert_pos(int arr[], int size, int n)
{
    int left = 0;
    int right = size - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == n)
            return mid;
        else if (arr[mid] < n)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
}
