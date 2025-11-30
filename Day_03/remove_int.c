#include <stdio.h>

void remove_int(int arr[], int *size, int target) {

    int i, j, p;
    for (i=0; i<*size; i++) {
        if (arr[i] == target) {
            for (j=i; j<*size-1; j++) {
                arr[j] = arr[j+1];
            }
            (*size)--;
            i--;
        }
        
        }
        for (p=0; p<*size; p++) {
            printf("%d\n", arr[p]);
    }
    
}

int main(){
    int size, target, i;
    

    printf("donner la taille de la tableau : ");
    scanf("%d", &size);

    int arr[size];

    for (i=0; i<size; i++) {
        printf("tapez l'element %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("write the target : ");
    scanf("%d", &target);

    remove_int(arr, &size, target);
}