#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
  int i;
    for (i = 0; i < size; i++) {
        if (n <= arr[i]) {  
            return i;      
        }
    }
    return size; 
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};  
    int size = 5;
    int n;

    printf("Dkhl number bach nchofu fin khaso ytsed : ");
    scanf("%d", &n);

    int pos = if_insert_pos(arr, size, n);

    printf("Number %d khaso ytsed f index: %d\n", n, pos);

    return 0;
}
