#include <stdio.h>
void two_sum(int arr[], int size, int target) {
    int i, j;
    int found = 0;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Indices adding to %d: [%d, %d]\n", target, i + 1, j + 1);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("il n'exicte pas une somme de 2 nombres = %d.\n", target);
    }
}
int main() {
    int size, target;
    printf("Enter le nombre des elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d nombres:\n", size);
    for (int i = 0; i < size; i++) {
        printf("nombre %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter une valeur: ");
    scanf("%d", &target);
    two_sum(arr, size, target);
    return 0;
}