#include <stdio.h>
 

int if_insert_pos(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] >= n)
            return i;
    }
    return size;
}



int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int size = 5;

    int n = 6;

    
    int pos = if_insert_pos(arr, size, n);

    printf(" position for %d is: %d\n", n, pos);

    return 0;
}