#include<stdio.h>
#include<stdlib.h>
void remove_int(int arr[], int size, int target) {
    int i, j = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] != target) {
            arr[j] = arr[i];
            j++;
        }
    }
}

int main() {
    int arr[]={1, 2, 3, 4, 2, 5, 2,2};
    int size=sizeof(arr) / sizeof(arr[0]);
    int target=2;
    int n=0;
    for(int i=0;i<size;i++)
    if(arr[i]==target){
        n++;
    }
    remove_int(arr, size, target);

    printf("le tableau apres suppression de %d:\n",target);
    for (int i=0; i < size-n; i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}