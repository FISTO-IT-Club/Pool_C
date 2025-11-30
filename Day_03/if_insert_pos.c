#include <stdio.h>

int if_insert_pos(int arr[], int size, int n)
{
   int i;

    for ( i = 0; i < size; i++)
    {
    
        if (arr[i] == n){
            return i;
         }

        if (arr[i] > n){
            return i;
         }
    }

    return size;
}
int main()
{
    int arr[] = {1,3,4,5,6};
    int size = 5;

    int n = 7;

    int pos = if_insert_pos(arr, size, n);

    printf("position d'insertion c'est : %d ",pos);

    return 0;
}

