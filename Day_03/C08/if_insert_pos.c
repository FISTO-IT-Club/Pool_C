#include <stdio.h>
      
     int if_insert_pos(int arr[], int size, int n) {

        for ( int i = 0; i < size; i++)
        {
            if (arr[i] >= n) {
            return i;
            }
            return size;

        }

}
int main ()   {

    int arr[] = {1, 3, 11, 7};
    int size = 4;

     int n = 11;
     int pos = if_insert_pos(arr, size, n);

    printf("Position = %d\n", pos);

    return 0;
}