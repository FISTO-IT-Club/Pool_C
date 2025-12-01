#include <stdio.h>

int remove_int(int arr[], int size, int target) {
  
    int write_index = 0;

    for (int i = 0; i < size; i++) {

        if (arr[i] != target) {

            arr[write_index] = arr[i];
          write_index++;
        }
    }
    return write_index;
}

