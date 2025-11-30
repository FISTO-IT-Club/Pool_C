#include <stdio.h>

int min_max(int arr[], int N, int *min, int *max)
{
    int i;

    if (N <= 0)
        return -1;

    *min = arr[0];
    *max = arr[0];

    i = 1;
   
        do {

            if (arr[i] < *min)
                *min = arr[i];
            if (arr[i] > *max)
                *max = arr[i];
                    i++;
          } while (N>i);
    return 0;
}
int main()
{
    int T[] = {5, -1, 7, 10, 3};
    int min, max;

    if (min_max(T, 5, &min, &max) == 0){
        printf("min = %d, max = %d \n", min, max);
   } else{
        printf("Erreur!!!");
    }
    return 0;
}