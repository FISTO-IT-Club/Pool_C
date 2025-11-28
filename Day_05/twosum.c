#include <stdio.h>
void two_sum(int arr[], int size, int target)
{
    int i = 0;
    int j;

    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("[%d, %d]\n", i, j);
                return;
            }
            j++;
        }
        i++;
    }

    printf("No solution\n");
}
