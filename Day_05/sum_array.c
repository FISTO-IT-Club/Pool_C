#include <stdio.h>


int sum_array(int arr[])
{
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++)
        sum += arr[i];

    return sum;
}