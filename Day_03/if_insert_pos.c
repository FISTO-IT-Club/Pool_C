#include <stdio.h>
#include<stdlib.h>
// the given function does not return the index
// it just returns the index if the number given is located at index 0 or the number of the first index was greater than the target n
// bad work, but we appreciate the effort. by Ali.
int if_insert_pos(int arr[], int size, int n) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i]==n) {
            printf("la position de %d est: %d\n",n,i);
            return i;
        }else if (arr[i]>n) {
            printf("la position de %d doit etre: %d\n",n,i);
            return i;
        }
    }
}

int main() {
    int arr[] = {1, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 2;
    int pos = if_insert_pos(arr, size, n);
    return 0;
}
