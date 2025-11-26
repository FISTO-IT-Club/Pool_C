#include<stdio.h>
#include<stdio.h>

void remove_int(int arr[], int size, int target){
    int i, j;
    for(i = 0; i < size; i++){
        if(arr[i] == target){
            for(j = i; j < size - 1; j++){
                arr[j] = arr[j + 1];
            }
            (size)--;
            i--;
        }
    }
}

int main(){
    int arr[10] = {1, 3, 5, 3, 7, 9, 3};
    int size = 7;
    int trarget = 3;
    printf("Tableux avant la suppression de %d: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    remove_int(arr, &size, trarget);
    printf("Tableux apres la suppression de %d: ", trarget);
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("Nouvelle taille du tableau: %d\n", size);
    return 0;
}



