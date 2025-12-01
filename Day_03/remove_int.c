#include <stdio.h>

void remove_int(int arr[], int size, int target) {
    int j=0;
    for (int i=0; i<size; i++) {
        if (target != arr[i]) {
            arr[j] = arr[i];
            j++;
        }
    }

    for (int k = j; k < size; k++) {
        arr[k] = 0;
    }

}

int main() {
    int tab[] = {3, 8, 5, 14, 2, 6};
 

    int size = sizeof(tab) / sizeof(tab[0]);
    remove_int(tab,size,14);
    remove_int(tab,size,2);

    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    // printf("min : %d\nmax : %d\n", min, max);
    return 0;
}
