#include <stdio.h>

void remove_int(int arr[], int size, int target)
{
    int i, j = 0;


    for (i = 0; i < size; i++) {
         
        if (arr[i] != target){
             
            arr[j] = arr[i]; 
            j++;
        }
    }

    while (j < size)
    {
        arr[j] = 0;
        j++;
    }


       printf("arr = ");
     for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int T[] = {10, 4, 30, -5, 50};
    int size = 5;
    int target = 30;

    remove_int(T, size, target);

    return 0;
}
