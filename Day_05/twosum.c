#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    int i, p;

    for (i=0; i<size; i++) {
        for (p=i+1; p<size; p++) {
            if (arr[i]+arr[p] == target) {
                printf("%d %d", i, p);
                return;
            }
        }
    }
    printf("ne trouver pas");
}

int main(){
    int size, j, number;

    printf("tapez la taille du tableau : ");
    scanf("%d", &size);

    int array[size];

    for (j=0; j<size; j++) {
        printf("saiser la valeur de l'element %d : ", j);
        scanf("%d", &array[j]);
    }

    printf("entrez la valeur du target : ");
    scanf("%d", &number);

    two_sum(array, size, number);
}