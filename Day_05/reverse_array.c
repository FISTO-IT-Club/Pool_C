#include <stdio.h>

void reverse_array(int arr[], int size)
{
    printf("Reversed array: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse_array(arr, size);
    return 0;
}
