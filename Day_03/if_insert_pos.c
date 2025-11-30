#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {

    int i;

    for (i=0; i<size; i++) {
        if (arr[i]==n) {
            return i;
        }
    }
    return size;
}

int main(){
    int i, nmbr, size, position;
    printf("tapez la taille de la tableau : ");
    scanf("%d", &size);
    int arr[size];

    for (i=0; i<size; i++) {
        printf("tapez la vlaeur de l'element %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("tapez le nmbr n : ");
    scanf("%d", &nmbr);

    position = if_insert_pos(arr, size, nmbr);
    printf("the position is : %d", position);
}