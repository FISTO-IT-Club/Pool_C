#include<stdio.h>
int main() {
    int arr[] = {1, 3, 5, 7, 9} ;  
    int size = 5;
    int target = 6;              
    int pos = 0 ;
    while (pos < size && arr[pos] < target) {
        pos++;
    }
    if (pos < size && arr[pos] == target) {
        printf("Found at index: %d\n", pos);
    }
    else {
        printf("Not found. Should be inserted at index: %d\n", pos);
    }
    return 0;
}
