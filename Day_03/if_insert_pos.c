#include <stdio.h>
#include<stdlib.h>
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