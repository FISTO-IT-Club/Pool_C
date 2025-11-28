#include <stdio.h>

void two_sum(int arr[], int size, int target) {

    int i = 0;
    int j;

    printf("Recherche des indices...\n");

    while (i <= size - 1) {  
        j = i + 1;

        while (j < size) {
            if (arr[i] + arr[j] == target) {
                printf("Paire trouvee : arr[%d] + arr[%d] = %d\n", i, j, target);
                printf("Indices (1-based) : [%d, %d]\n", i + 1, j + 1);
                return;
            }
            j++;
        }
        i++;
    }

    printf("Aucune paire ne correspond a la valeur %d\n", target);
}

int main() {

    int arr[] = {2, 7, 11, 15};
    int size = 4;
    int target = 22;

    printf("Tableau de base : {2, 7, 11, 15}\n");
    printf("Cible = %d\n\n", target);

    two_sum(arr, size, target);

    return 0;
}
